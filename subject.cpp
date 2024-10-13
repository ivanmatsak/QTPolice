#include "subject.h"
#include "ui_subject.h"

Subject::Subject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Subject)
{
    ui->setupUi(this);
}

Subject::~Subject()
{
    delete ui;
}
void Subject::on_pushButton_clicked()
{
    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Subjects");
//    model = new QSqlTableModel();
//    model->setTable("Groups");
//    model->select();

    model->setHeaderData(0, Qt::Horizontal,"ID");
    model->setHeaderData(1, Qt::Horizontal,"Название");
    model->setHeaderData(2, Qt::Horizontal,"Количество часов");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
}


void Subject::on_addButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("INSERT INTO Subjects VALUES(:name, :hours)");
    query->bindValue(":name", ui->nameLine->text());
    query->bindValue(":hours", ui->hoursLine->text());

    query->exec();
    on_pushButton_clicked();
}


void Subject::on_tableView_clicked(const QModelIndex &index)
{
    int tmp_num;
    tmp_num = ui->tableView->model()->data(ui->tableView->model()->index(index.row(), 0)).toInt();
    ui->idLine->setText(QString::number(tmp_num));

    QSqlQuery* query = new QSqlQuery();
    query->prepare("SELECT subName, numOfHours FROM Subjects WHERE subId = :id");
    query->bindValue(":id", tmp_num);

    if(query->exec())
    {
        query->next();
        ui->nameLine->setText(query->value(0).toString());
        ui->hoursLine->setText(query->value(1).toString());
    }
}


void Subject::on_editButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("UPDATE Subjects SET subName = ?, numOfHours = ? WHERE subId = ?");
    query->bindValue(0, ui->nameLine->text());
    query->bindValue(1, ui->hoursLine->text());
    query->bindValue(2, ui->idLine->text());

    query->exec();
    on_pushButton_clicked();
}


void Subject::on_delButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("DELETE FROM Subjects WHERE subId = ?");
    query->bindValue(0, ui->idLine->text());

    query->exec();
    on_pushButton_clicked();
}
