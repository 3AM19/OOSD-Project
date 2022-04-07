/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LogInWindow
{
public:
    QLabel *title;
    QLabel *username;
    QLineEdit *usernameInput;
    QLabel *password;
    QLineEdit *passwordInput;
    QPushButton *pushButton;

    void setupUi(QDialog *LogInWindow)
    {
        if (LogInWindow->objectName().isEmpty())
            LogInWindow->setObjectName(QString::fromUtf8("LogInWindow"));
        LogInWindow->resize(800, 600);
        title = new QLabel(LogInWindow);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(190, 90, 451, 61));
        username = new QLabel(LogInWindow);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(270, 200, 71, 20));
        username->setCursor(QCursor(Qt::IBeamCursor));
        usernameInput = new QLineEdit(LogInWindow);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        usernameInput->setGeometry(QRect(400, 200, 113, 21));
        password = new QLabel(LogInWindow);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(270, 260, 61, 20));
        passwordInput = new QLineEdit(LogInWindow);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(400, 260, 113, 21));
        pushButton = new QPushButton(LogInWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 340, 83, 29));
        pushButton->setAutoDefault(false);

        retranslateUi(LogInWindow);

        QMetaObject::connectSlotsByName(LogInWindow);
    } // setupUi

    void retranslateUi(QDialog *LogInWindow)
    {
        LogInWindow->setWindowTitle(QCoreApplication::translate("LogInWindow", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("LogInWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">Welcome to BSN Stock Stumulator</span></p></body></html>", nullptr));
        username->setText(QCoreApplication::translate("LogInWindow", "Username", nullptr));
        password->setText(QCoreApplication::translate("LogInWindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("LogInWindow", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogInWindow: public Ui_LogInWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
