/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Jun 7 22:24:05 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>
#include "macaddress_lineedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *SEND;
    QFrame *RECOR;
    MacAddress_lineEdit *MAC;
    QLabel *MAC_label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(240, 320);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SEND = new QPushButton(centralwidget);
        SEND->setObjectName(QString::fromUtf8("SEND"));
        SEND->setGeometry(QRect(71, 262, 98, 27));
        RECOR = new QFrame(centralwidget);
        RECOR->setObjectName(QString::fromUtf8("RECOR"));
        RECOR->setGeometry(QRect(10, 83, 221, 171));
        RECOR->setFrameShape(QFrame::StyledPanel);
        RECOR->setFrameShadow(QFrame::Raised);
        MAC = new MacAddress_lineEdit(centralwidget);
        MAC->setObjectName(QString::fromUtf8("MAC"));
        MAC->setGeometry(QRect(10, 44, 221, 27));
        MAC_label = new QLabel(centralwidget);
        MAC_label->setObjectName(QString::fromUtf8("MAC_label"));
        MAC_label->setGeometry(QRect(11, 17, 91, 17));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        SEND->setText(QApplication::translate("MainWindow", "Send", 0, QApplication::UnicodeUTF8));
        MAC_label->setText(QApplication::translate("MainWindow", "MAC Address", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
