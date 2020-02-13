#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyTcpClient.h"
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>

class MyTcpClient : public QMainWindow
{
	Q_OBJECT
private:
	QTcpSocket *tcpClient;

public:
	MyTcpClient(QWidget *parent = Q_NULLPTR);

private slots:
	//¿Í»§¶Ë²Ûº¯Êý
	void ReadData();
	void ReadError(QAbstractSocket::SocketError);
	void on_btnConnect_clicked();
	void on_btnSend_clicked();
	void on_pushButton_clicked();

private:
	Ui::MyTcpClientClass ui;
};
