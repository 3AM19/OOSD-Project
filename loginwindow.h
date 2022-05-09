#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class LogInWindow;
}

class LogInWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LogInWindow(QWidget *parent = nullptr);
    ~LogInWindow();

private slots:
    void on_submitButton_clicked();

private:
    Ui::LogInWindow *ui;
};

#endif // LOGINWINDOW_H
