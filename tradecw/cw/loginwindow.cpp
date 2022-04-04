#include "loginwindow.h"
#include "ui_loginwindow.h"

LogInWindow::LogInWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogInWindow)
{
    ui->setupUi(this);
}

LogInWindow::~LogInWindow()
{
    delete ui;
}
