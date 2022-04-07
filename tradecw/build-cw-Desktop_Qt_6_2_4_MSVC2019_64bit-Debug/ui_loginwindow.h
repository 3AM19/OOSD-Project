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

QT_BEGIN_NAMESPACE

class Ui_LogInWindow
{
public:

    void setupUi(QDialog *LogInWindow)
    {
        if (LogInWindow->objectName().isEmpty())
            LogInWindow->setObjectName(QString::fromUtf8("LogInWindow"));
        LogInWindow->resize(800, 600);

        retranslateUi(LogInWindow);

        QMetaObject::connectSlotsByName(LogInWindow);
    } // setupUi

    void retranslateUi(QDialog *LogInWindow)
    {
        LogInWindow->setWindowTitle(QCoreApplication::translate("LogInWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogInWindow: public Ui_LogInWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
