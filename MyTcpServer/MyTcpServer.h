#pragma once

#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkInterface>
#include <QMessageBox>
#include <QtWidgets/QMainWindow>
#include "ui_MyTcpServer.h"

class MyTcpServer : public QMainWindow
{
	Q_OBJECT

private:
	QTcpServer *tcpServer;
	QList<QTcpSocket*> tcpClient;
	QTcpSocket *currentClient;

public:
	MyTcpServer(QWidget *parent = Q_NULLPTR);

private slots:
	void NewConnectionSlot();
	void disconnectedSlot();
	void ReadData();
	void on_btnConnect_clicked();
	void on_btnSend_clicked();
	void on_btnClear_clicked();

private:
	Ui::MyTcpServerClass ui;
};
