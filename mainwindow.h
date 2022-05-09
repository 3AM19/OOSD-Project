#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase db;
    void connClose()
    {
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("/Users/Donmighster/Desktop/Coursework/tradecw/qtproject.db");
        if (!db.open()){
            qDebug()<<("Failed");
            return false;
        } else {
            qDebug()<<("Connected");
            return true;
        }
    }


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SignUpButton_clicked();

    void on_LogInButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

