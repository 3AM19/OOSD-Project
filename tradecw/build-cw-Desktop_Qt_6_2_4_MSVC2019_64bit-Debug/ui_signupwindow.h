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
    QLabel *label;
    QLineEdit *usernameInput;
    QLabel *usernameLabel;
    QLineEdit *passwordInput;
    QLabel *label_2;
    QPushButton *submitButton;

    void setupUi(QDialog *SignUpWindow)
    {
        if (SignUpWindow->objectName().isEmpty())
            SignUpWindow->setObjectName(QString::fromUtf8("SignUpWindow"));
        SignUpWindow->resize(800, 600);
        label = new QLabel(SignUpWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 90, 291, 41));
        usernameInput = new QLineEdit(SignUpWindow);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        usernameInput->setGeometry(QRect(330, 190, 113, 21));
        usernameLabel = new QLabel(SignUpWindow);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(260, 190, 61, 16));
        passwordInput = new QLineEdit(SignUpWindow);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(330, 230, 113, 21));
        label_2 = new QLabel(SignUpWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 230, 58, 16));
        submitButton = new QPushButton(SignUpWindow);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(310, 270, 100, 32));

        retranslateUi(SignUpWindow);

        QMetaObject::connectSlotsByName(SignUpWindow);
    } // setupUi

    void retranslateUi(QDialog *SignUpWindow)
    {
        SignUpWindow->setWindowTitle(QCoreApplication::translate("SignUpWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SignUpWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">The BSN Stock Simulator</span></p></body></html>", nullptr));
        usernameLabel->setText(QCoreApplication::translate("SignUpWindow", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("SignUpWindow", "Password", nullptr));
        submitButton->setText(QCoreApplication::translate("SignUpWindow", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindow: public Ui_SignUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
