#ifndef TEACHER_H
#define TEACHER_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>

namespace Ui {
class Teacher;
}

class Teacher : public QWidget
{
    Q_OBJECT

public:
    explicit Teacher(QWidget *parent = nullptr);
    ~Teacher();

private slots:

    void on_pushButton_clicked();

    void on_addButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_editButton_clicked();

    void on_delButton_clicked();

private:
    Ui::Teacher *ui;
    QSqlQueryModel* model;
};

#endif // TEACHER_H
