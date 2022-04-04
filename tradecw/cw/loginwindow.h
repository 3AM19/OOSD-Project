#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>

namespace Ui {
class LogInWindow;
}

class LogInWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LogInWindow(QWidget *parent = nullptr);
    ~LogInWindow();

private:
    Ui::LogInWindow *ui;
};

#endif // LOGINWINDOW_H
