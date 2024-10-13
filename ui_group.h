/********************************************************************************
** Form generated from reading UI file 'group.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUP_H
#define UI_GROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Group
{
public:
    QPushButton *addButton;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *editButton;
    QLineEdit *numOfStudentsLine;
    QLineEdit *yearLine;
    QLabel *label_3;
    QLineEdit *groupNumLine;
    QLineEdit *idLine;
    QLineEdit *facultyLine;
    QLabel *label;
    QPushButton *delButton;

    void setupUi(QWidget *Group)
    {
        if (Group->objectName().isEmpty())
            Group->setObjectName("Group");
        Group->resize(753, 344);
        addButton = new QPushButton(Group);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(120, 300, 83, 29));
        label_5 = new QLabel(Group);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(550, 180, 81, 20));
        label_4 = new QLabel(Group);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(470, 150, 121, 20));
        label_2 = new QLabel(Group);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 90, 91, 20));
        pushButton = new QPushButton(Group);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 300, 83, 29));
        tableView = new QTableView(Group);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 10, 451, 281));
        editButton = new QPushButton(Group);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(220, 300, 83, 29));
        numOfStudentsLine = new QLineEdit(Group);
        numOfStudentsLine->setObjectName("numOfStudentsLine");
        numOfStudentsLine->setGeometry(QRect(600, 150, 141, 28));
        yearLine = new QLineEdit(Group);
        yearLine->setObjectName("yearLine");
        yearLine->setGeometry(QRect(600, 180, 141, 28));
        label_3 = new QLabel(Group);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(480, 120, 111, 20));
        groupNumLine = new QLineEdit(Group);
        groupNumLine->setObjectName("groupNumLine");
        groupNumLine->setGeometry(QRect(600, 120, 141, 28));
        idLine = new QLineEdit(Group);
        idLine->setObjectName("idLine");
        idLine->setEnabled(false);
        idLine->setGeometry(QRect(600, 60, 141, 28));
        facultyLine = new QLineEdit(Group);
        facultyLine->setObjectName("facultyLine");
        facultyLine->setGeometry(QRect(600, 90, 141, 28));
        label = new QLabel(Group);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 60, 31, 20));
        delButton = new QPushButton(Group);
        delButton->setObjectName("delButton");
        delButton->setGeometry(QRect(320, 300, 83, 29));

        retranslateUi(Group);

        QMetaObject::connectSlotsByName(Group);
    } // setupUi

    void retranslateUi(QWidget *Group)
    {
        Group->setWindowTitle(QCoreApplication::translate("Group", "Form", nullptr));
        addButton->setText(QCoreApplication::translate("Group", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("Group", "\320\232\321\203\321\200\321\201", nullptr));
        label_4->setText(QCoreApplication::translate("Group", "\320\232\320\276\320\273-\320\262\320\276 \321\203\321\207\320\260\321\211\320\270\321\205\321\201\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Group", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("Group", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        editButton->setText(QCoreApplication::translate("Group", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("Group", "\320\235\320\276\320\274\320\265\321\200 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        label->setText(QCoreApplication::translate("Group", "ID", nullptr));
        delButton->setText(QCoreApplication::translate("Group", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Group: public Ui_Group {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUP_H
