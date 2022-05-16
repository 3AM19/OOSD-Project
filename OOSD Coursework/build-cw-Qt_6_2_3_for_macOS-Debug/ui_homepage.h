/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Balance_label;
    QLabel *Balance_Display;
    QFrame *frame;
    QLabel *titleLabel;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *BuyAAPL_label;
    QLabel *AmountD_label;
    QLineEdit *Dollar_input;
    QLabel *ShowDto_label;
    QPushButton *BuyButton1;
    QLabel *AmountA_label;
    QLineEdit *AAPL_input;
    QLabel *ShowAtoD_label;
    QPushButton *BuyButton2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *BuyAAPL_label_2;
    QLabel *AmountD_label_2;
    QLineEdit *Dollar_input_2;
    QLabel *ShowDto_label_2;
    QPushButton *SellButton1;
    QLabel *AmountA_label_2;
    QLineEdit *AAPL_input_2;
    QLabel *ShowAtoD_label_2;
    QPushButton *SellButton2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Holdings_label;
    QLabel *Holdings_Display;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QString::fromUtf8("HomePage"));
        HomePage->resize(800, 800);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 217));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(236, 236, 236, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(245, 245, 245, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(191, 191, 191, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(169, 169, 169, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 216));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush8(QColor(0, 0, 0, 63));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        HomePage->setPalette(palette);
        horizontalLayoutWidget_2 = new QWidget(HomePage);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 80, 171, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Balance_label = new QLabel(horizontalLayoutWidget_2);
        Balance_label->setObjectName(QString::fromUtf8("Balance_label"));
        QFont font;
        font.setPointSize(20);
        Balance_label->setFont(font);

        horizontalLayout_2->addWidget(Balance_label);

        Balance_Display = new QLabel(horizontalLayoutWidget_2);
        Balance_Display->setObjectName(QString::fromUtf8("Balance_Display"));
        Balance_Display->setFont(font);

        horizontalLayout_2->addWidget(Balance_Display);

        frame = new QFrame(HomePage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 801, 81));
        QPalette palette1;
        frame->setPalette(palette1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        titleLabel = new QLabel(frame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(230, 10, 361, 61));
        QFont font1;
        font1.setPointSize(30);
        titleLabel->setFont(font1);
        pushButton = new QPushButton(HomePage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 140, 100, 32));
        horizontalLayoutWidget = new QWidget(HomePage);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(230, 190, 531, 371));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget = new QWidget(HomePage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 130, 171, 265));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BuyAAPL_label = new QLabel(verticalLayoutWidget);
        BuyAAPL_label->setObjectName(QString::fromUtf8("BuyAAPL_label"));
        BuyAAPL_label->setFont(font);

        verticalLayout->addWidget(BuyAAPL_label);

        AmountD_label = new QLabel(verticalLayoutWidget);
        AmountD_label->setObjectName(QString::fromUtf8("AmountD_label"));

        verticalLayout->addWidget(AmountD_label);

        Dollar_input = new QLineEdit(verticalLayoutWidget);
        Dollar_input->setObjectName(QString::fromUtf8("Dollar_input"));

        verticalLayout->addWidget(Dollar_input);

        ShowDto_label = new QLabel(verticalLayoutWidget);
        ShowDto_label->setObjectName(QString::fromUtf8("ShowDto_label"));

        verticalLayout->addWidget(ShowDto_label);

        BuyButton1 = new QPushButton(verticalLayoutWidget);
        BuyButton1->setObjectName(QString::fromUtf8("BuyButton1"));

        verticalLayout->addWidget(BuyButton1);

        AmountA_label = new QLabel(verticalLayoutWidget);
        AmountA_label->setObjectName(QString::fromUtf8("AmountA_label"));

        verticalLayout->addWidget(AmountA_label);

        AAPL_input = new QLineEdit(verticalLayoutWidget);
        AAPL_input->setObjectName(QString::fromUtf8("AAPL_input"));

        verticalLayout->addWidget(AAPL_input);

        ShowAtoD_label = new QLabel(verticalLayoutWidget);
        ShowAtoD_label->setObjectName(QString::fromUtf8("ShowAtoD_label"));

        verticalLayout->addWidget(ShowAtoD_label);

        BuyButton2 = new QPushButton(verticalLayoutWidget);
        BuyButton2->setObjectName(QString::fromUtf8("BuyButton2"));

        verticalLayout->addWidget(BuyButton2);

        verticalLayoutWidget_2 = new QWidget(HomePage);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 393, 171, 271));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        BuyAAPL_label_2 = new QLabel(verticalLayoutWidget_2);
        BuyAAPL_label_2->setObjectName(QString::fromUtf8("BuyAAPL_label_2"));
        BuyAAPL_label_2->setFont(font);

        verticalLayout_2->addWidget(BuyAAPL_label_2);

        AmountD_label_2 = new QLabel(verticalLayoutWidget_2);
        AmountD_label_2->setObjectName(QString::fromUtf8("AmountD_label_2"));

        verticalLayout_2->addWidget(AmountD_label_2);

        Dollar_input_2 = new QLineEdit(verticalLayoutWidget_2);
        Dollar_input_2->setObjectName(QString::fromUtf8("Dollar_input_2"));

        verticalLayout_2->addWidget(Dollar_input_2);

        ShowDto_label_2 = new QLabel(verticalLayoutWidget_2);
        ShowDto_label_2->setObjectName(QString::fromUtf8("ShowDto_label_2"));

        verticalLayout_2->addWidget(ShowDto_label_2);

        SellButton1 = new QPushButton(verticalLayoutWidget_2);
        SellButton1->setObjectName(QString::fromUtf8("SellButton1"));

        verticalLayout_2->addWidget(SellButton1);

        AmountA_label_2 = new QLabel(verticalLayoutWidget_2);
        AmountA_label_2->setObjectName(QString::fromUtf8("AmountA_label_2"));

        verticalLayout_2->addWidget(AmountA_label_2);

        AAPL_input_2 = new QLineEdit(verticalLayoutWidget_2);
        AAPL_input_2->setObjectName(QString::fromUtf8("AAPL_input_2"));

        verticalLayout_2->addWidget(AAPL_input_2);

        ShowAtoD_label_2 = new QLabel(verticalLayoutWidget_2);
        ShowAtoD_label_2->setObjectName(QString::fromUtf8("ShowAtoD_label_2"));

        verticalLayout_2->addWidget(ShowAtoD_label_2);

        SellButton2 = new QPushButton(verticalLayoutWidget_2);
        SellButton2->setObjectName(QString::fromUtf8("SellButton2"));

        verticalLayout_2->addWidget(SellButton2);

        horizontalLayoutWidget_3 = new QWidget(HomePage);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(190, 80, 171, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Holdings_label = new QLabel(horizontalLayoutWidget_3);
        Holdings_label->setObjectName(QString::fromUtf8("Holdings_label"));
        Holdings_label->setFont(font);

        horizontalLayout_3->addWidget(Holdings_label);

        Holdings_Display = new QLabel(horizontalLayoutWidget_3);
        Holdings_Display->setObjectName(QString::fromUtf8("Holdings_Display"));
        Holdings_Display->setFont(font);

        horizontalLayout_3->addWidget(Holdings_Display);


        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Dialog", nullptr));
        Balance_label->setText(QCoreApplication::translate("HomePage", "Balance:", nullptr));
        Balance_Display->setText(QString());
        titleLabel->setText(QCoreApplication::translate("HomePage", "BSN TRADING PLATFORM", nullptr));
        pushButton->setText(QCoreApplication::translate("HomePage", "Display Stock", nullptr));
        BuyAAPL_label->setText(QCoreApplication::translate("HomePage", "Buy AAPL", nullptr));
        AmountD_label->setText(QCoreApplication::translate("HomePage", "Amount in Dollars:", nullptr));
        ShowDto_label->setText(QCoreApplication::translate("HomePage", "0 AAPL", nullptr));
        BuyButton1->setText(QCoreApplication::translate("HomePage", "Buy", nullptr));
        AmountA_label->setText(QCoreApplication::translate("HomePage", "Amount of AAPL:", nullptr));
        ShowAtoD_label->setText(QCoreApplication::translate("HomePage", "$0", nullptr));
        BuyButton2->setText(QCoreApplication::translate("HomePage", "Buy", nullptr));
        BuyAAPL_label_2->setText(QCoreApplication::translate("HomePage", "Sell AAPL", nullptr));
        AmountD_label_2->setText(QCoreApplication::translate("HomePage", "Amount in Dollars:", nullptr));
        ShowDto_label_2->setText(QCoreApplication::translate("HomePage", "0 AAPL", nullptr));
        SellButton1->setText(QCoreApplication::translate("HomePage", "Sell", nullptr));
        AmountA_label_2->setText(QCoreApplication::translate("HomePage", "Amount of AAPL:", nullptr));
        ShowAtoD_label_2->setText(QCoreApplication::translate("HomePage", "$0", nullptr));
        SellButton2->setText(QCoreApplication::translate("HomePage", "Sell", nullptr));
        Holdings_label->setText(QCoreApplication::translate("HomePage", "Holdings:", nullptr));
        Holdings_Display->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
