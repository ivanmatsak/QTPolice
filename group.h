#ifndef GROUP_H
#define GROUP_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
namespace Ui {
class Group;
}

class Group : public QWidget
{
    Q_OBJECT

public:
    explicit Group(QWidget *parent = nullptr);
    ~Group();

private slots:

    void on_pushButton_clicked();

    void on_addButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_editButton_clicked();

    void on_delButton_clicked();


private:
    Ui::Group *ui;
    //QSqlTableModel* model;
    QSqlQueryModel* model;
};

#endif // GROUP_H
