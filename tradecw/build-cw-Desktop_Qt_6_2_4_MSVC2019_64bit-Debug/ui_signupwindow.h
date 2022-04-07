/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUpWindow
{
public:
    QLabel *title;
    QLineEdit *usernameInput;
    QLabel *usernameLabel;
    QLineEdit *passwordInput;
    QLabel *passwordlabel;
    QPushButton *submitButton;
    QPushButton *backButton;
    QLabel *name;
    QLineEdit *nameInput;
    QLabel *email;
    QLineEdit *emailInput;

    void setupUi(QDialog *SignUpWindow)
    {
        if (SignUpWindow->objectName().isEmpty())
            SignUpWindow->setObjectName(QString::fromUtf8("SignUpWindow"));
        SignUpWindow->resize(800, 600);
        title = new QLabel(SignUpWindow);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(170, 70, 471, 71));
        usernameInput = new QLineEdit(SignUpWindow);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        usernameInput->setGeometry(QRect(340, 240, 113, 21));
        usernameLabel = new QLabel(SignUpWindow);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(240, 240, 71, 16));
        passwordInput = new QLineEdit(SignUpWindow);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(340, 310, 113, 21));
        passwordlabel = new QLabel(SignUpWindow);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));
        passwordlabel->setGeometry(QRect(240, 310, 71, 16));
        submitButton = new QPushButton(SignUpWindow);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(190, 340, 80, 29));
        submitButton->setCheckable(false);
        backButton = new QPushButton(SignUpWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(440, 350, 80, 29));
        backButton->setCheckable(false);
        name = new QLabel(SignUpWindow);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(240, 200, 51, 20));
        name->setCursor(QCursor(Qt::IBeamCursor));
        nameInput = new QLineEdit(SignUpWindow);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));
        nameInput->setGeometry(QRect(340, 200, 113, 21));
        email = new QLabel(SignUpWindow);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(240, 270, 63, 20));
        emailInput = new QLineEdit(SignUpWindow);
        emailInput->setObjectName(QString::fromUtf8("emailInput"));
        emailInput->setGeometry(QRect(340, 270, 113, 21));

        retranslateUi(SignUpWindow);

        QMetaObject::connectSlotsByName(SignUpWindow);
    } // setupUi

    void retranslateUi(QDialog *SignUpWindow)
    {
        SignUpWindow->setWindowTitle(QCoreApplication::translate("SignUpWindow", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("SignUpWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">The BSN Stock Simulator</span></p></body></html>", nullptr));
        usernameLabel->setText(QCoreApplication::translate("SignUpWindow", "Username", nullptr));
        passwordlabel->setText(QCoreApplication::translate("SignUpWindow", "Password", nullptr));
        submitButton->setText(QCoreApplication::translate("SignUpWindow", "Submit", nullptr));
        backButton->setText(QCoreApplication::translate("SignUpWindow", "Back ", nullptr));
        name->setText(QCoreApplication::translate("SignUpWindow", "Name ", nullptr));
        email->setText(QCoreApplication::translate("SignUpWindow", "eMail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindow: public Ui_SignUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
