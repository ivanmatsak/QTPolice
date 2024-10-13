#include "teacher.h"
#include "ui_teacher.h"

Teacher::Teacher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
}

Teacher::~Teacher()
{
    delete ui;
}
void Teacher::on_pushButton_clicked()
{
    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Teachers");
//    model = new QSqlTableModel();
//    model->setTable("Groups");
//    model->select();

    model->setHeaderData(0, Qt::Horizontal,"ID");
    model->setHeaderData(1, Qt::Horizontal,"Полное имя");
    model->setHeaderData(2, Qt::Horizontal,"Должность");
    model->setHeaderData(3, Qt::Horizontal,"Кафедра");
    model->setHeaderData(4, Qt::Horizontal,"Контактный телефон");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
}


void Teacher::on_addButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("INSERT INTO Teachers VALUES(:name, :pos, :dep, :num)");
    query->bindValue(":name", ui->nameLine->text());
    query->bindValue(":pos", ui->posLine->text());
    query->bindValue(":dep", ui->depLine->text());
    query->bindValue(":num", ui->numLine->text());

    query->exec();
    on_pushButton_clicked();
}


void Teacher::on_tableView_clicked(const QModelIndex &index)
{
    int tmp_num;
    tmp_num = ui->tableView->model()->data(ui->tableView->model()->index(index.row(), 0)).toInt();
    ui->idLine->setText(QString::number(tmp_num));

    QSqlQuery* query = new QSqlQuery();
    query->prepare("SELECT fullName, position, departmentName, contactNumber FROM Teachers WHERE teacherId = :id");
    query->bindValue(":id", tmp_num);

    if(query->exec())
    {
        query->next();
        ui->nameLine->setText(query->value(0).toString());
        ui->posLine->setText(query->value(1).toString());
        ui->depLine->setText(query->value(2).toString());
        ui->numLine->setText(query->value(3).toString());
    }
}


void Teacher::on_editButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("UPDATE Teachers SET fullName = ?, position = ?, departmentName = ?, contactNumber = ? WHERE teacherId = ?");
    query->bindValue(0, ui->nameLine->text());
    query->bindValue(1, ui->posLine->text());
    query->bindValue(2, ui->depLine->text());
    query->bindValue(3, ui->numLine->text());
    query->bindValue(4, ui->idLine->text());

    query->exec();
    on_pushButton_clicked();
}


void Teacher::on_delButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("DELETE FROM Teachers WHERE teacherId = ?");
    query->bindValue(0, ui->idLine->text());

    query->exec();
    on_pushButton_clicked();
}
