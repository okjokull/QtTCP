/********************************************************************************
** Form generated from reading UI file 'MyTcpServer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTCPSERVER_H
#define UI_MYTCPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTcpServerClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *edtSend;
    QPushButton *btnSend;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *edtRecv;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *edtIP;
    QLabel *label_2;
    QLineEdit *edtPort;
    QPushButton *btnConnect;
    QHBoxLayout *horizontalLayout;
    QCheckBox *ckbHexShow;
    QPushButton *btnClear;
    QComboBox *cbxConnection;
    QCheckBox *ckbHexSend;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyTcpServerClass)
    {
        if (MyTcpServerClass->objectName().isEmpty())
            MyTcpServerClass->setObjectName(QStringLiteral("MyTcpServerClass"));
        MyTcpServerClass->resize(753, 598);
        centralWidget = new QWidget(MyTcpServerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(69, 339, 610, 110));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(610, 110));
        groupBox_2->setMaximumSize(QSize(16777215, 110));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        edtSend = new QTextEdit(groupBox_2);
        edtSend->setObjectName(QStringLiteral("edtSend"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(edtSend->sizePolicy().hasHeightForWidth());
        edtSend->setSizePolicy(sizePolicy1);
        edtSend->setMinimumSize(QSize(500, 75));
        edtSend->setMaximumSize(QSize(16777215, 75));

        horizontalLayout_3->addWidget(edtSend);

        btnSend = new QPushButton(groupBox_2);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnSend->sizePolicy().hasHeightForWidth());
        btnSend->setSizePolicy(sizePolicy2);
        btnSend->setMinimumSize(QSize(75, 75));
        btnSend->setMaximumSize(QSize(75, 75));

        horizontalLayout_3->addWidget(btnSend);


        verticalLayout_3->addLayout(horizontalLayout_3);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 40, 598, 284));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        edtRecv = new QTextEdit(groupBox);
        edtRecv->setObjectName(QStringLiteral("edtRecv"));
        edtRecv->setMinimumSize(QSize(400, 250));
        edtRecv->setReadOnly(true);

        horizontalLayout_2->addWidget(edtRecv);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy3);
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        edtIP = new QLineEdit(groupBox_3);
        edtIP->setObjectName(QStringLiteral("edtIP"));

        verticalLayout->addWidget(edtIP);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        edtPort = new QLineEdit(groupBox_3);
        edtPort->setObjectName(QStringLiteral("edtPort"));

        verticalLayout->addWidget(edtPort);

        btnConnect = new QPushButton(groupBox_3);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));

        verticalLayout->addWidget(btnConnect);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ckbHexShow = new QCheckBox(groupBox_3);
        ckbHexShow->setObjectName(QStringLiteral("ckbHexShow"));

        horizontalLayout->addWidget(ckbHexShow);

        btnClear = new QPushButton(groupBox_3);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        horizontalLayout->addWidget(btnClear);


        verticalLayout->addLayout(horizontalLayout);

        cbxConnection = new QComboBox(groupBox_3);
        cbxConnection->setObjectName(QStringLiteral("cbxConnection"));

        verticalLayout->addWidget(cbxConnection);

        ckbHexSend = new QCheckBox(groupBox_3);
        ckbHexSend->setObjectName(QStringLiteral("ckbHexSend"));

        verticalLayout->addWidget(ckbHexSend);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_4->addWidget(groupBox_3);

        MyTcpServerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyTcpServerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 753, 23));
        MyTcpServerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyTcpServerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyTcpServerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyTcpServerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyTcpServerClass->setStatusBar(statusBar);

        retranslateUi(MyTcpServerClass);

        QMetaObject::connectSlotsByName(MyTcpServerClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyTcpServerClass)
    {
        MyTcpServerClass->setWindowTitle(QApplication::translate("MyTcpServerClass", "MyTcpServer", 0));
        groupBox_2->setTitle(QApplication::translate("MyTcpServerClass", "\345\217\221\351\200\201\347\252\227\345\217\243", 0));
        btnSend->setText(QApplication::translate("MyTcpServerClass", "\345\217\221\351\200\201", 0));
        groupBox->setTitle(QApplication::translate("MyTcpServerClass", "\346\216\245\346\224\266\347\252\227\345\217\243", 0));
        groupBox_3->setTitle(QApplication::translate("MyTcpServerClass", "\347\275\221\347\273\234\350\256\276\347\275\256", 0));
        label->setText(QApplication::translate("MyTcpServerClass", "1\357\274\211\346\234\254\346\234\272IP\345\234\260\345\235\200", 0));
        edtIP->setText(QString());
        label_2->setText(QApplication::translate("MyTcpServerClass", "2\357\274\211\346\234\254\345\234\260\347\253\257\345\217\243\345\217\267", 0));
        edtPort->setText(QApplication::translate("MyTcpServerClass", "8000", 0));
        btnConnect->setText(QApplication::translate("MyTcpServerClass", "\347\233\221\345\220\254", 0));
        ckbHexShow->setText(QApplication::translate("MyTcpServerClass", "Hex\346\230\276\347\244\272", 0));
        btnClear->setText(QApplication::translate("MyTcpServerClass", "\346\270\205\351\231\244\347\252\227\345\217\243", 0));
        cbxConnection->clear();
        cbxConnection->insertItems(0, QStringList()
         << QApplication::translate("MyTcpServerClass", "\345\205\250\351\203\250\350\277\236\346\216\245", 0)
        );
        ckbHexSend->setText(QApplication::translate("MyTcpServerClass", "Hex\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class MyTcpServerClass: public Ui_MyTcpServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTCPSERVER_H
