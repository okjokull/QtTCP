/********************************************************************************
** Form generated from reading UI file 'MyTcpClient.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTCPCLIENT_H
#define UI_MYTCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTcpClientClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *edtSend;
    QPushButton *btnSend;
    QGroupBox *groupBox;
    QTextEdit *edtRecv;
    QGroupBox *groupBox_3;
    QLabel *label;
    QLineEdit *edtIP;
    QLabel *label_2;
    QLineEdit *edtPort;
    QPushButton *btnConnect;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyTcpClientClass)
    {
        if (MyTcpClientClass->objectName().isEmpty())
            MyTcpClientClass->setObjectName(QStringLiteral("MyTcpClientClass"));
        MyTcpClientClass->resize(713, 579);
        centralWidget = new QWidget(MyTcpClientClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 370, 581, 109));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(0, 109));
        groupBox_2->setMaximumSize(QSize(16777215, 109));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        edtSend = new QTextEdit(groupBox_2);
        edtSend->setObjectName(QStringLiteral("edtSend"));
        edtSend->setMinimumSize(QSize(460, 75));
        edtSend->setMaximumSize(QSize(16777215, 75));

        horizontalLayout_3->addWidget(edtSend);

        btnSend = new QPushButton(groupBox_2);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        btnSend->setMinimumSize(QSize(75, 75));
        btnSend->setMaximumSize(QSize(75, 75));

        horizontalLayout_3->addWidget(btnSend);


        verticalLayout_3->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(61, 31, 410, 322));
        edtRecv = new QTextEdit(groupBox);
        edtRecv->setObjectName(QStringLiteral("edtRecv"));
        edtRecv->setGeometry(QRect(10, 22, 390, 290));
        edtRecv->setMinimumSize(QSize(390, 290));
        edtRecv->setReadOnly(true);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(480, 30, 150, 322));
        groupBox_3->setMinimumSize(QSize(150, 0));
        groupBox_3->setMaximumSize(QSize(150, 16777215));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 22, 90, 16));
        edtIP = new QLineEdit(groupBox_3);
        edtIP->setObjectName(QStringLiteral("edtIP"));
        edtIP->setGeometry(QRect(10, 40, 130, 20));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 66, 90, 16));
        edtPort = new QLineEdit(groupBox_3);
        edtPort->setObjectName(QStringLiteral("edtPort"));
        edtPort->setGeometry(QRect(10, 84, 130, 20));
        btnConnect = new QPushButton(groupBox_3);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        btnConnect->setGeometry(QRect(10, 130, 61, 51));
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 250, 61, 51));
        MyTcpClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyTcpClientClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 713, 23));
        MyTcpClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyTcpClientClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyTcpClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyTcpClientClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyTcpClientClass->setStatusBar(statusBar);

        retranslateUi(MyTcpClientClass);

        QMetaObject::connectSlotsByName(MyTcpClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyTcpClientClass)
    {
        MyTcpClientClass->setWindowTitle(QApplication::translate("MyTcpClientClass", "MyTcpClient", 0));
        groupBox_2->setTitle(QApplication::translate("MyTcpClientClass", "\345\217\221\351\200\201\347\252\227\345\217\243", 0));
        btnSend->setText(QApplication::translate("MyTcpClientClass", "\345\217\221\351\200\201", 0));
        groupBox->setTitle(QApplication::translate("MyTcpClientClass", "\346\216\245\346\224\266\347\252\227\345\217\243", 0));
        groupBox_3->setTitle(QApplication::translate("MyTcpClientClass", "\347\275\221\347\273\234\350\256\276\347\275\256", 0));
        label->setText(QApplication::translate("MyTcpClientClass", "1\357\274\211\346\234\215\345\212\241\345\231\250IP\345\234\260\345\235\200", 0));
        edtIP->setText(QString());
        label_2->setText(QApplication::translate("MyTcpClientClass", "2\357\274\211\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\345\217\267", 0));
        edtPort->setText(QApplication::translate("MyTcpClientClass", "8000", 0));
        btnConnect->setText(QApplication::translate("MyTcpClientClass", "\350\277\236\346\216\245", 0));
        pushButton->setText(QApplication::translate("MyTcpClientClass", "\346\270\205\351\231\244\347\252\227\345\217\243", 0));
    } // retranslateUi

};

namespace Ui {
    class MyTcpClientClass: public Ui_MyTcpClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTCPCLIENT_H
