#ifndef SHEDULE_H
#define SHEDULE_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>

namespace Ui {
class Shedule;
}

class Shedule : public QWidget
{
    Q_OBJECT

public:
    explicit Shedule(QWidget *parent = nullptr);
    ~Shedule();

private slots:

    void on_pushButton_clicked();

    void on_addButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_editButton_clicked();

    void on_delButton_clicked();


    void on_groupTable_clicked(const QModelIndex &index);

    void on_subTable_clicked(const QModelIndex &index);

    void on_teacherTable_clicked(const QModelIndex &index);

private:
    Ui::Shedule *ui;
    QSqlQueryModel* model;
};

#endif // SHEDULE_H
