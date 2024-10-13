#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QtSql>

#include "group.h"
#include "ui_group.h"
#include "teacher.h"
#include "ui_teacher.h"
#include "subject.h"
#include "ui_subject.h"
#include "shedule.h"
#include "ui_shedule.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Group* group;
    Teacher* teacher;
    Subject* subject;
    Shedule* shedule;

private slots:
    void on_connectButton_clicked();

    void on_patButton_clicked();

    void on_docButton_clicked();

    void on_disButton_clicked();

    void on_regButton_clicked();

    void on_conButton_clicked();

    void on_groupButton_clicked();

    void on_teacherButton_clicked();

    void on_sheduleButton_clicked();

    void on_subjectButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlQueryModel* model;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
