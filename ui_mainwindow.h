/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *sheduleButton;
    QPushButton *groupButton;
    QPushButton *teacherButton;
    QPushButton *connectButton;
    QPushButton *subjectButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(481, 122);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sheduleButton = new QPushButton(centralwidget);
        sheduleButton->setObjectName("sheduleButton");
        sheduleButton->setGeometry(QRect(180, 20, 131, 21));
        groupButton = new QPushButton(centralwidget);
        groupButton->setObjectName("groupButton");
        groupButton->setGeometry(QRect(22, 18, 131, 21));
        teacherButton = new QPushButton(centralwidget);
        teacherButton->setObjectName("teacherButton");
        teacherButton->setGeometry(QRect(20, 50, 131, 21));
        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName("connectButton");
        connectButton->setGeometry(QRect(320, 20, 141, 21));
        subjectButton = new QPushButton(centralwidget);
        subjectButton->setObjectName("subjectButton");
        subjectButton->setGeometry(QRect(180, 50, 131, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 481, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sheduleButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        groupButton->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\321\213", nullptr));
        teacherButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        connectButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217", nullptr));
        subjectButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
