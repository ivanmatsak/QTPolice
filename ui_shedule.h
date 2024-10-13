/********************************************************************************
** Form generated from reading UI file 'shedule.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHEDULE_H
#define UI_SHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shedule
{
public:
    QTableView *groupTable;
    QLabel *label_2;
    QTableView *subTable;
    QLineEdit *teacherLine;
    QPushButton *editButton;
    QPushButton *addButton;
    QPushButton *delButton;
    QLabel *label_3;
    QTableView *tableView;
    QLineEdit *idLine;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *groupLine;
    QLabel *label_4;
    QLineEdit *subLine;
    QTableView *teacherTable;

    void setupUi(QWidget *Shedule)
    {
        if (Shedule->objectName().isEmpty())
            Shedule->setObjectName("Shedule");
        Shedule->resize(1012, 434);
        groupTable = new QTableView(Shedule);
        groupTable->setObjectName("groupTable");
        groupTable->setGeometry(QRect(20, 10, 256, 192));
        label_2 = new QLabel(Shedule);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(770, 270, 111, 20));
        subTable = new QTableView(Shedule);
        subTable->setObjectName("subTable");
        subTable->setGeometry(QRect(20, 210, 256, 192));
        teacherLine = new QLineEdit(Shedule);
        teacherLine->setObjectName("teacherLine");
        teacherLine->setGeometry(QRect(850, 330, 141, 28));
        editButton = new QPushButton(Shedule);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(810, 370, 83, 29));
        addButton = new QPushButton(Shedule);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(710, 370, 83, 29));
        delButton = new QPushButton(Shedule);
        delButton->setObjectName("delButton");
        delButton->setGeometry(QRect(910, 370, 83, 29));
        label_3 = new QLabel(Shedule);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(760, 300, 91, 20));
        tableView = new QTableView(Shedule);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(610, 10, 381, 211));
        idLine = new QLineEdit(Shedule);
        idLine->setObjectName("idLine");
        idLine->setEnabled(false);
        idLine->setGeometry(QRect(850, 240, 141, 28));
        label = new QLabel(Shedule);
        label->setObjectName("label");
        label->setGeometry(QRect(800, 240, 31, 20));
        pushButton = new QPushButton(Shedule);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(610, 370, 83, 29));
        groupLine = new QLineEdit(Shedule);
        groupLine->setObjectName("groupLine");
        groupLine->setGeometry(QRect(850, 270, 141, 28));
        label_4 = new QLabel(Shedule);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(710, 330, 121, 20));
        subLine = new QLineEdit(Shedule);
        subLine->setObjectName("subLine");
        subLine->setGeometry(QRect(850, 300, 141, 28));
        teacherTable = new QTableView(Shedule);
        teacherTable->setObjectName("teacherTable");
        teacherTable->setGeometry(QRect(290, 10, 256, 192));

        retranslateUi(Shedule);

        QMetaObject::connectSlotsByName(Shedule);
    } // setupUi

    void retranslateUi(QWidget *Shedule)
    {
        Shedule->setWindowTitle(QCoreApplication::translate("Shedule", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Shedule", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        editButton->setText(QCoreApplication::translate("Shedule", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        addButton->setText(QCoreApplication::translate("Shedule", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        delButton->setText(QCoreApplication::translate("Shedule", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("Shedule", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        label->setText(QCoreApplication::translate("Shedule", "ID", nullptr));
        pushButton->setText(QCoreApplication::translate("Shedule", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("Shedule", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shedule: public Ui_Shedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHEDULE_H
