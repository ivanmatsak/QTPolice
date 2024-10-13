/********************************************************************************
** Form generated from reading UI file 'teacher.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_H
#define UI_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teacher
{
public:
    QTableView *tableView;
    QLineEdit *depLine;
    QLabel *label_3;
    QLineEdit *idLine;
    QPushButton *delButton;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *editButton;
    QLineEdit *numLine;
    QLabel *label_2;
    QLineEdit *posLine;
    QPushButton *addButton;
    QLineEdit *nameLine;
    QLabel *label_4;

    void setupUi(QWidget *Teacher)
    {
        if (Teacher->objectName().isEmpty())
            Teacher->setObjectName("Teacher");
        Teacher->resize(753, 345);
        tableView = new QTableView(Teacher);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 10, 451, 281));
        depLine = new QLineEdit(Teacher);
        depLine->setObjectName("depLine");
        depLine->setGeometry(QRect(600, 150, 141, 28));
        label_3 = new QLabel(Teacher);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(510, 120, 111, 20));
        idLine = new QLineEdit(Teacher);
        idLine->setObjectName("idLine");
        idLine->setEnabled(false);
        idLine->setGeometry(QRect(600, 60, 141, 28));
        delButton = new QPushButton(Teacher);
        delButton->setObjectName("delButton");
        delButton->setGeometry(QRect(320, 300, 83, 29));
        label_5 = new QLabel(Teacher);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(540, 180, 41, 20));
        pushButton = new QPushButton(Teacher);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 300, 83, 29));
        label = new QLabel(Teacher);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 60, 31, 20));
        editButton = new QPushButton(Teacher);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(220, 300, 83, 29));
        numLine = new QLineEdit(Teacher);
        numLine->setObjectName("numLine");
        numLine->setGeometry(QRect(600, 180, 141, 28));
        label_2 = new QLabel(Teacher);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 90, 91, 20));
        posLine = new QLineEdit(Teacher);
        posLine->setObjectName("posLine");
        posLine->setGeometry(QRect(600, 120, 141, 28));
        addButton = new QPushButton(Teacher);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(120, 300, 83, 29));
        nameLine = new QLineEdit(Teacher);
        nameLine->setObjectName("nameLine");
        nameLine->setGeometry(QRect(600, 90, 141, 28));
        label_4 = new QLabel(Teacher);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(520, 150, 61, 20));

        retranslateUi(Teacher);

        QMetaObject::connectSlotsByName(Teacher);
    } // setupUi

    void retranslateUi(QWidget *Teacher)
    {
        Teacher->setWindowTitle(QCoreApplication::translate("Teacher", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("Teacher", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        delButton->setText(QCoreApplication::translate("Teacher", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("Teacher", "\320\242\320\265\320\273.", nullptr));
        pushButton->setText(QCoreApplication::translate("Teacher", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Teacher", "ID", nullptr));
        editButton->setText(QCoreApplication::translate("Teacher", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("Teacher", "\320\237\320\276\320\273\320\275\320\276\320\265 \320\270\320\274\321\217", nullptr));
        addButton->setText(QCoreApplication::translate("Teacher", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("Teacher", "\320\232\320\260\321\204\320\265\320\264\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teacher: public Ui_Teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_H
