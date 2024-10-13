#include "shedule.h"
#include "ui_shedule.h"

Shedule::Shedule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Shedule)
{
    ui->setupUi(this);
}

Shedule::~Shedule()
{
    delete ui;
}
void Shedule::on_pushButton_clicked()
{
    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Shedule");
//    model = new QSqlTableModel();
//    model->setTable("Groups");
//    model->select();

    model->setHeaderData(0, Qt::Horizontal,"ID");
    model->setHeaderData(1, Qt::Horizontal,"Группа");
    model->setHeaderData(2, Qt::Horizontal,"Предмет");
    model->setHeaderData(3, Qt::Horizontal,"Преподаватель");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();

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

    ui->groupTable->setModel(model);
    ui->groupTable->resizeColumnsToContents();
    ui->groupTable->show();

    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Subjects");
//    model = new QSqlTableModel();
//    model->setTable("Groups");
//    model->select();

    model->setHeaderData(0, Qt::Horizontal,"ID");
    model->setHeaderData(1, Qt::Horizontal,"Название");
    model->setHeaderData(2, Qt::Horizontal,"Количество часов");

    ui->subTable->setModel(model);
    ui->subTable->resizeColumnsToContents();
    ui->subTable->show();

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

    ui->teacherTable->setModel(model);
    ui->teacherTable->resizeColumnsToContents();
    ui->teacherTable->show();
}


void Shedule::on_addButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("INSERT INTO Shedule VALUES(:group, :sub, :teacher)");
    query->bindValue(":group", QString(ui->groupLine->text()));
    query->bindValue(":sub", QString(ui->subLine->text()));
    query->bindValue(":teacher", ui->teacherLine->text());

    query->exec();
    on_pushButton_clicked();
}


void Shedule::on_tableView_clicked(const QModelIndex &index)
{
    int tmp_num;
    tmp_num = ui->tableView->model()->data(ui->tableView->model()->index(index.row(), 0)).toInt();
    ui->idLine->setText(QString::number(tmp_num));

    QSqlQuery* query = new QSqlQuery();
    query->prepare("SELECT grNum, sub, teacher FROM Shedule WHERE sheduleId = :id");
    query->bindValue(":id", tmp_num);

    if(query->exec())
    {
        query->next();
        ui->groupLine->setText(query->value(0).toString());
        ui->subLine->setText(query->value(1).toString());
        ui->teacherLine->setText(query->value(2).toString());
    }
}


void Shedule::on_editButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("UPDATE Shedule SET grNum = ?, sub = ?, teacher = ? WHERE sheduleId = ?");
    query->bindValue(0, ui->groupLine->text());
    query->bindValue(1, ui->subLine->text());
    query->bindValue(2, ui->teacherLine->text());
    query->bindValue(3, ui->idLine->text());

    query->exec();
    on_pushButton_clicked();
}


void Shedule::on_delButton_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("DELETE FROM Shedule WHERE sheduleId = ?");
    query->bindValue(0, ui->idLine->text());

    query->exec();
    on_pushButton_clicked();
}

void Shedule::on_groupTable_clicked(const QModelIndex &index)
{
    int tmp_num;
    tmp_num = ui->groupTable->model()->data(ui->groupTable->model()->index(index.row(), 0)).toInt();
    ui->idLine->setText(QString::number(tmp_num));

    QSqlQuery* query = new QSqlQuery();
    query->prepare("SELECT facultyName, groupNum, numOfSdudents, year FROM Groups WHERE groupId = :id");
    query->bindValue(":id", tmp_num);

    if(query->exec())
    {
        query->next();
        ui->groupLine->setText(query->value(1).toString());
    }
}


void Shedule::on_subTable_clicked(const QModelIndex &index)
{
    int tmp_num;
    tmp_num = ui->subTable->model()->data(ui->subTable->model()->index(index.row(), 0)).toInt();
    ui->idLine->setText(QString::number(tmp_num));

    QSqlQuery* query = new QSqlQuery();
    query->prepare("SELECT subName, numOfHours FROM Subjects WHERE subId = :id");
    query->bindValue(":id", tmp_num);

    if(query->exec())
    {
        query->next();
        ui->subLine->setText(query->value(0).toString());
    }
}


void Shedule::on_teacherTable_clicked(const QModelIndex &index)
{
    int tmp_num;
    tmp_num = ui->teacherTable->model()->data(ui->teacherTable->model()->index(index.row(), 0)).toInt();
    ui->idLine->setText(QString::number(tmp_num));

    QSqlQuery* query = new QSqlQuery();
    query->prepare("SELECT fullName, position, departmentName, contactNumber FROM Teachers WHERE teacherId = :id");
    query->bindValue(":id", tmp_num);

    if(query->exec())
    {
        query->next();
        ui->teacherLine->setText(query->value(0).toString());
    }
}

