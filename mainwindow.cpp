#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signupwindow.h"
#include "loginwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if (!connOpen()){
        ui->label->setText("Not connected");
    } else {
        ui->label->setText("Connected");
    }
    QSqlQuery qry;
    qry.prepare("CREATE TABLE IF NOT EXISTS USERS (USERNAME TEXT NOT NULL UNIQUE, PASSWORD TEXT NOT NULL,"
                " BALANCE REAL NOT NULL, ACTIVE INTEGER NOT NULL, HOLDINGS REAL NOT NULL, PRIMARY KEY(USERNAME))");
    if (!qry.exec())
        {
        qWarning("%s", qry.lastError().text().toLocal8Bit().data());
        return;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SignUpButton_clicked()
{
    this->hide();
    connClose();
    SignUpWindow goToSignUp;
    goToSignUp.setModal(true);
    goToSignUp.exec();
}


void MainWindow::on_LogInButton_clicked()
{
    this->hide();
    connClose();
    LogInWindow goToLogIn;
    goToLogIn.setModal(true);
    goToLogIn.exec();
}

