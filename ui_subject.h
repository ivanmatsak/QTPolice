/********************************************************************************
** Form generated from reading UI file 'subject.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECT_H
#define UI_SUBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Subject
{
public:
    QLineEdit *idLine;
    QLineEdit *hoursLine;
    QLineEdit *nameLine;
    QLabel *label_3;
    QPushButton *delButton;
    QPushButton *addButton;
    QLabel *label_2;
    QTableView *tableView;
    QLabel *label;
    QPushButton *editButton;
    QPushButton *pushButton;

    void setupUi(QWidget *Subject)
    {
        if (Subject->objectName().isEmpty())
            Subject->setObjectName("Subject");
        Subject->resize(756, 339);
        idLine = new QLineEdit(Subject);
        idLine->setObjectName("idLine");
        idLine->setEnabled(false);
        idLine->setGeometry(QRect(600, 60, 141, 28));
        hoursLine = new QLineEdit(Subject);
        hoursLine->setObjectName("hoursLine");
        hoursLine->setGeometry(QRect(600, 120, 141, 28));
        nameLine = new QLineEdit(Subject);
        nameLine->setObjectName("nameLine");
        nameLine->setGeometry(QRect(600, 90, 141, 28));
        label_3 = new QLabel(Subject);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(480, 120, 101, 20));
        delButton = new QPushButton(Subject);
        delButton->setObjectName("delButton");
        delButton->setGeometry(QRect(320, 300, 83, 29));
        addButton = new QPushButton(Subject);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(120, 300, 83, 29));
        label_2 = new QLabel(Subject);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 90, 91, 20));
        tableView = new QTableView(Subject);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 10, 451, 281));
        label = new QLabel(Subject);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 60, 31, 20));
        editButton = new QPushButton(Subject);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(220, 300, 83, 29));
        pushButton = new QPushButton(Subject);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 300, 83, 29));

        retranslateUi(Subject);

        QMetaObject::connectSlotsByName(Subject);
    } // setupUi

    void retranslateUi(QWidget *Subject)
    {
        Subject->setWindowTitle(QCoreApplication::translate("Subject", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("Subject", "\320\232\320\276\320\273-\320\262\320\276 \321\207\320\260\321\201\320\276\320\262", nullptr));
        delButton->setText(QCoreApplication::translate("Subject", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        addButton->setText(QCoreApplication::translate("Subject", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("Subject", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("Subject", "ID", nullptr));
        editButton->setText(QCoreApplication::translate("Subject", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("Subject", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Subject: public Ui_Subject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECT_H
