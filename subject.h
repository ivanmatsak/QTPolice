#ifndef SUBJECT_H
#define SUBJECT_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>

namespace Ui {
class Subject;
}

class Subject : public QWidget
{
    Q_OBJECT

public:
    explicit Subject(QWidget *parent = nullptr);
    ~Subject();

private slots:

    void on_pushButton_clicked();

    void on_addButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_editButton_clicked();

    void on_delButton_clicked();

private:
    Ui::Subject *ui;
    QSqlQueryModel* model;
};

#endif // SUBJECT_H
