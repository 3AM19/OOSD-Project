#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signupwindow.h"
#include "loginwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SignUpButton_clicked()
{
    this->hide();
    SignUpWindow goToSignUp;
    goToSignUp.setModal(true);
    goToSignUp.exec();
}

void MainWindow::on_LogInButton_clicked(){
    this->hide();
    LogInWindow goToLogIn;
    goToLogIn.setModal(true);
    goToLogIn.exec();
}
