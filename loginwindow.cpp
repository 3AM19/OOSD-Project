#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "homepage.h"

LogInWindow::LogInWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogInWindow)
{
    ui->setupUi(this);
    MainWindow conn;
    if (!conn.connOpen()){
        ui->label->setText("Failed to connect to database");
    }

}

LogInWindow::~LogInWindow()
{
    delete ui;
}

void LogInWindow::on_submitButton_clicked()
{
    QSqlQuery deactivate;
    deactivate.prepare("UPDATE USERS SET ACTIVE = 0");
    deactivate.exec();
    QString Username, Password;
    Username = ui->usernameInput->text();
    Password = ui->passwordInput->text();
    QSqlQuery findUser;
    findUser.prepare("SELECT * FROM USERS WHERE USERNAME = '"+Username+"' AND PASSWORD = '"+Password+"'");
    if (findUser.exec()) {
        if (findUser.next()){
            int Correct = 1;
            QSqlQuery loggedIn;
            loggedIn.prepare("UPDATE USERS SET ACTIVE = :Correct WHERE USERNAME = '"+Username+"'");
            loggedIn.bindValue(":Correct", Correct);
            loggedIn.exec();
            this->hide();
            HomePage goToHomePage;
            goToHomePage.setModal(true);
            goToHomePage.exec();
        } else {
            ui->log_label->setText("Incorrect");
        }
    }
}



