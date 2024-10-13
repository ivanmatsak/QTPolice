#include "group.h"
#include "ui_group.h"

Group::Group(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Group)
{
    ui->setupUi(this);
}

Group::~Group()
{
    delete ui;
}
void Group::on_pushButton_clicked()
{
    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Groups");
//    model = new QSqlTableModel();
//    model->setTable("Groups");
//    model->select();

    model->setHeaderData(0, Qt::Horizontal,"ID");
    model->setHeaderData(1, Qt::Horizontal,"Факультет");
    model->setHeaderData(2, Qt::Horizontal,"Номер группы");
    model->setHeaderData(3, Qt::Horizontal,"Кол-во учащихся");
    model->setHeaderData(4, Qt::Horizontal,"Курс");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
}


void Group::on_addButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("INSERT INTO Groups VALUES(:facultyName, :groupNum, :numOfStudents, :year)");
    query->bindValue(":facultyName", QString(ui->facultyLine->text()));
    query->bindValue(":groupNum", QString(ui->groupNumLine->text()));
    query->bindValue(":numOfStudents", ui->numOfStudentsLine->text().toInt());
    query->bindValue(":year", ui->yearLine->text().toInt());

    query->exec();
    on_pushButton_clicked();
}


void Group::on_tableView_clicked(const QModelIndex &index)
{
    int tmp_num;
    tmp_num = ui->tableView->model()->data(ui->tableView->model()->index(index.row(), 0)).toInt();
    ui->idLine->setText(QString::number(tmp_num));

    QSqlQuery* query = new QSqlQuery();
    query->prepare("SELECT facultyName, groupNum, numOfSdudents, year FROM Groups WHERE groupId = :id");
    query->bindValue(":id", tmp_num);

    if(query->exec())
    {
        query->next();
        ui->facultyLine->setText(query->value(0).toString());
        ui->groupNumLine->setText(query->value(1).toString());
        ui->numOfStudentsLine->setText(query->value(2).toString());
        ui->yearLine->setText(query->value(3).toString());
    }
}


void Group::on_editButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("UPDATE Groups SET facultyName = ?, groupNum = ?, numOfSdudents = ?, year = ? WHERE groupId = ?");
    query->bindValue(0, ui->facultyLine->text());
    query->bindValue(1, ui->groupNumLine->text());
    query->bindValue(2, ui->numOfStudentsLine->text());
    query->bindValue(3, ui->yearLine->text());
    query->bindValue(4, ui->idLine->text());

    query->exec();
    on_pushButton_clicked();
}


void Group::on_delButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("DELETE FROM Groups WHERE groupId = ?");
    query->bindValue(0, ui->idLine->text());

    query->exec();
    on_pushButton_clicked();
}
