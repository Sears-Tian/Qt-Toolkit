#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QDir>
#include <QtDebug>

//条件编译：切换 1 - MySQL; 0 - SQLite
#define MYSQL 1

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        m_db = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
#if MYSQL
        // 连接MySQL数据库
        m_db = QSqlDatabase::addDatabase("QMYSQL");
        m_db.setHostName("localhost");
        m_db.setUserName("root");
        m_db.setPassword("5200");
        m_db.setDatabaseName("student");
#else
        // 连接SQLite3数据库
        m_db = QSqlDatabase::addDatabase("QSQLITE");
        m_db.setDatabaseName("student.db");
//        qDebug() << QDir::currentPath();
#endif
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAdd_clicked()
{
    bool ok = m_db.open();
    if(ok)
    {
        //插入数据
        QSqlQuery query;
        query.prepare("INSERT INTO info (id, name, address) VALUES (:id, :name, :address)");
        query.bindValue(":id", ui->lineEditId->text().toInt());
        query.bindValue(":name", ui->lineEditName->text());
        query.bindValue(":address", ui->lineEditAddress->text());
        query.exec();

        // 关闭数据库
         m_db.close();
    }
    else
    {
        QMessageBox::information(this, "Error", "Open database error: " + m_db.lastError().text());
    }

}

void MainWindow::on_pushButtonDelete_clicked()
{
    bool ok = m_db.open();
    if(ok)
    {
        // 删除数据
        QSqlQuery query;
        query.exec("DELETE FROM info where id = 0");

        // 关闭数据库
         m_db.close();
    }
    else
    {
        QMessageBox::information(this, "Error", "Open database error: " + m_db.lastError().text());
    }

}

void MainWindow::on_pushButtonModify_clicked()
{
    bool ok = m_db.open();
    if(ok)
    {
        // 修改数据
        QSqlQuery query;
        query.exec("UPDATE info SET address = \"China\" where id = 0");

        // 关闭数据库
         m_db.close();
    }
    else
    {
        QMessageBox::information(this, "Error", "Open database error: " + m_db.lastError().text());
    }

}

void MainWindow::on_pushButtonShow_clicked()
{
    ui->treeWidget->clear();

    bool ok = m_db.open();
    if(ok)
    {
        // 查询数据
        QSqlQuery query;
        query.exec("select * from info");
        while(query.next())
        {
            // 方式1. 通过索引编号
//           int id =  query.value(0).toInt();
//           QString name = query.value(1).toString();
//           QString address = query.value(2).toString();

            //方式2. 通过字段名 + 结果均为字符串
//           int id = query.value("id").toInt();
           QString strId = query.value("id").toString();
           QString name = query.value("name").toString();
           QString address = query.value("address").toString();

           QTreeWidgetItem* item = new QTreeWidgetItem;
//           item->setText(0, QString::number(id));
           item->setText(0, strId);
           item->setText(1, name);
           item->setText(2, address);
           ui->treeWidget->addTopLevelItem(item);
        }
        // 关闭数据库
         m_db.close();
    }
    else
    {
        QMessageBox::information(this, "Error", "Open database error: " + m_db.lastError().text());
    }


}

