#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_connectButton_clicked()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Driver={ODBC Driver 17 for SQL Server};Server=HOME-PC;Database=SheduleProject;Trusted_Connection=yes;");
    //db.setDatabaseName("Driver={SQL Server};Server=(local);Trusted_Connection=Yes;Database=SheduleProject;");
    //db.setUserName("apelsin");
    //db.setPassword("1234567890");
    db.open();
}


void MainWindow::on_groupButton_clicked()
{
    group = new Group();
    group->show();
}


void MainWindow::on_teacherButton_clicked()
{
    teacher = new Teacher();
    teacher->show();
}


void MainWindow::on_subjectButton_clicked()
{
    subject = new Subject();
    subject->show();
}


void MainWindow::on_sheduleButton_clicked()
{
    shedule = new Shedule();
    shedule->show();
}

