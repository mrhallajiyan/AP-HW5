#ifndef LOCATION_H
#define LOCATION_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <iostream>


namespace Ui {
class Location;
}

class Location : public QMainWindow
{
    Q_OBJECT

public:
    explicit Location(QWidget *parent = 0);
    ~Location();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Location *ui;
    QSqlDatabase mydb;

};

#endif // LOCATION_H
