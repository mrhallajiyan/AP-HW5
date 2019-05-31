#include "location.h"
#include "ui_location.h"

Location::Location(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Location)
{
    ui->setupUi(this);

    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName(qApp->applicationDirPath()
                            + QDir::separator()
                            + "Location.db" );


    if(!mydb.open())
        std::cout << "Failed to connect" << std::endl;
    else
        std::cout << "connected .." <<std::endl;
}

Location::~Location()
{
    delete ui;
}

void Location::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void Location::on_pushButton_4_clicked()
{
        QSqlQuery qry_s,qry;
        QString Username,Password,Phone,Name;
        Username = ui->lineEdit_4->text();
        Password = ui->lineEdit_3->text();
        Phone = ui->lineEdit_5->text();
        Name = ui->lineEdit_6->text();

        qry_s.prepare("select * from projects where Username = '"+Username+"'");
        qry_s.exec();
        int count{};
        while(qry_s.next())
            count++;
        if(count == 0)
        {
            qDebug("Inserting");
            qry.prepare("INSERT INTO projects(Username, Password, Phone, Name) VALUES (:Username, :Password, :Phone, :Name)");
            qry.bindValue(":Username", Username);
            qry.bindValue(":Password", Password);
            qry.bindValue(":Phone", Phone);
            qry.bindValue(":Name", Name);
            qry.exec();
//            qDebug("clicked");
//            if( !qry.exec() )
//                qDebug() << qry.lastError().text();
//            else
//                qDebug( "Inserted!" );

             ui->stackedWidget->setCurrentIndex(0);
        }
        else
        {
            ui->lineEdit_4->setText("This Username is taken");
        }

}

void Location::on_pushButton_2_clicked()
{
        qDebug("inside if");
        QString Username,Password;
        Username = ui->lineEdit_2->text();
        Password = ui->lineEdit->text();
        QSqlQuery qry;
        if(qry.exec("select * from projects where Username = '"+Username+"' and Password = '"+Password+"'"))
        {
            qDebug("inside if2");
            int count{};
            while(qry.next())
                count++;
            if(count == 1)
            {
                qDebug("corrects");
                ui->stackedWidget->setCurrentIndex(2);
            }
            if(count > 1)
                qDebug("duplicate");
            if(count == 0)
                qDebug("not found");
        }
}
