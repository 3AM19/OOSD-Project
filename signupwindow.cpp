#include "signupwindow.h"
#include "ui_signupwindow.h"
#include "loginwindow.h"
#include <QRegularExpressionValidator>

SignUpWindow::SignUpWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpWindow)
{
    MainWindow conn;
    ui->setupUi(this);

    if (!conn.connOpen()){
        ui->label->setText("Failed to connect to database");
    }
}

SignUpWindow::~SignUpWindow()
{
    delete ui;
}


void SignUpWindow::on_submitButton_clicked()
{
    QString Username, Password;
    Username = ui->usernameInput->text();
    Password = ui->passwordInput->text();
    QSqlQuery query;
    query.prepare("INSERT INTO USERS(USERNAME, PASSWORD, BALANCE, ACTIVE, HOLDINGS) "
                  "VALUES('"+Username+"', '"+Password+"', 50000, 0, 0)");
    if (!query.exec())
        {
        qWarning("%s", query.lastError().text().toLocal8Bit().data());
        ui->created_label->setText("Invalid entry");
        return;
    } else {
        ui->created_label->setText("User added successfully.");
    }

}

void SignUpWindow::on_pushButton_clicked()
{
    MainWindow conn;
    conn.connClose();
    this->hide();
    LogInWindow goToLogIn;
    goToLogIn.setModal(true);
    goToLogIn.exec();
}

