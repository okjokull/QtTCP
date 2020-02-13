#include "MyTcpClient.h"

MyTcpClient::MyTcpClient(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	//��ʼ��TCP�ͻ���
	tcpClient = new QTcpSocket(this);   //ʵ����tcpClient
	tcpClient->abort();                 //ȡ��ԭ������
	ui.btnConnect->setEnabled(true);
	ui.btnSend->setEnabled(false);

	connect(tcpClient, SIGNAL(readyRead()), this, SLOT(ReadData()));
	connect(tcpClient, SIGNAL(error(QAbstractSocket::SocketError)), \
		this, SLOT(ReadError(QAbstractSocket::SocketError)));
}

void MyTcpClient::ReadData()
{
	QByteArray buffer = tcpClient->readAll();
	if (!buffer.isEmpty())
	{
		ui.edtRecv->append(buffer);
	}
}

void MyTcpClient::ReadError(QAbstractSocket::SocketError)
{
	tcpClient->disconnectFromHost();
	ui.btnConnect->setText(tr("����"));
	QMessageBox msgBox;
	msgBox.setText(tr("failed to connect server because %1").arg(tcpClient->errorString()));
	msgBox.exec();
}

void MyTcpClient::on_btnConnect_clicked()
{
	if (ui.btnConnect->text() == "����")
	{
		tcpClient->connectToHost(ui.edtIP->text(), ui.edtPort->text().toInt());
		if (tcpClient->waitForConnected(1000))  // ���ӳɹ������if{}
		{
			ui.btnConnect->setText("�Ͽ�");
			ui.btnSend->setEnabled(true);
		}
	}
	else
	{
		tcpClient->disconnectFromHost();
		if (tcpClient->state() == QAbstractSocket::UnconnectedState \
			|| tcpClient->waitForDisconnected(1000))  //�ѶϿ����������if{}
		{
			ui.btnConnect->setText("����");
			ui.btnSend->setEnabled(false);
		}
	}
}

void MyTcpClient::on_btnSend_clicked()
{
	QString data = ui.edtSend->toPlainText();
	if (data != "")
	{
		tcpClient->write(data.toLatin1()); //qt5��ȥ��.toAscii()
	}
}

void MyTcpClient::on_pushButton_clicked()
{
	ui.edtRecv->clear();
}
