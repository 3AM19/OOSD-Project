#include "homepage.h"
#include "ui_homepage.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>
#include <string.h>
using namespace std;
HomePage::HomePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
    MainWindow conn;
    conn.connClose();
    conn.connOpen();
    QString Balance;
    QString Holdings;
    QSqlQuery getAssets;
    getAssets.prepare("SELECT BALANCE, HOLDINGS FROM USERS WHERE ACTIVE = 1");
    if (!getAssets.exec()){
        qWarning("%s", getAssets.lastError().text().toLocal8Bit().data());
        return;
    }
    if (getAssets.next()){
        Balance = getAssets.value(0).toString();
        Holdings = getAssets.value(1).toString();
    }
    ui->Balance_Display->setText(Balance);
    ui->Holdings_Display->setText(Holdings);
    conn.connClose();
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_pushButton_clicked()
{
    QFile file("/Users/Donmighster/Desktop/Coursework/tradecw/cw_stocks.txt");
    if (!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(0, "info", file.errorString());
    } else{
        QVector<int> Days[7];
        QVector<int> Months[7];
        QVector<int> Years[7];
        QVector<qreal> Closes[7];
        QVector<qreal> Opens[7];
        QVector<qreal> Highs[7];
        QVector<qreal> Lows[7];
        QTextStream in(&file);
        int j = 0;
        while (!in.atEnd()){
            QString line = in.readLine();
            QStringList list = line.split(" ");
            for (int i=0; i<5; i++){
                if (i == 0 && j > 0){
                    QString Date = list.at(i);
                    QStringList Date2 = Date.split("/");
                    Days->push_back(Date2.at(0).toInt());
                    Months->push_back(Date2.at(1).toInt());
                    Years->push_back(Date2.at(2).toInt());
                } else if (i == 1) {
                    Closes->push_back(list.at(i).toDouble());
                } else if (i == 2) {
                    Opens->push_back(list.at(i).toDouble());
                } else if (i == 3) {
                    Highs->push_back(list.at(i).toDouble());
                } else {
                    Lows->push_back(list.at(i).toDouble());
                    j++;
                }
            }
        }
        QChart *chart = new QChart();
        QDateTimeAxis *axisX = new QDateTimeAxis;
        axisX->setTickCount(6);
        axisX->setFormat("dd-MM-yyyy");
        axisX->setTitleText("Date");
        chart->addAxis(axisX, Qt::AlignBottom);
        QValueAxis *axisY = new QValueAxis;
        axisY->setLabelFormat("%i");
        axisY->setTitleText("Price");
        chart->addAxis(axisY, Qt::AlignLeft);
        QLineSeries *series = new QLineSeries();
        QList<int> DaysList = Days->toList();
        QList<int> MonthsList = Months->toList();
        QList<int> YearsList = Years->toList();
        QList<qreal> ClosesList = Closes->toList();
        QDateTime date;
        for (int i = 1; i < 7; i++){
            date.setDate(QDate(YearsList[i], MonthsList[i], DaysList[i]));
            series->append(date.toMSecsSinceEpoch(), ClosesList[i]);
        }
        chart->legend()->hide();
        chart->setTitle("AAPL Stock");
        chart->addSeries(series);
        series->attachAxis(axisX);
        series->attachAxis(axisY);
        QChartView *chartview = new QChartView(chart);
        chartview->setRenderHint(QPainter::Antialiasing);
        ui->horizontalLayout->addWidget(chartview);
    }
}

void HomePage::on_Dollar_input_textEdited(const QString &arg1)
{
    QFile file("/Users/Donmighster/Desktop/Coursework/tradecw/cw_stocks.txt");
    if (!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(0, "info", file.errorString());
    }
    QTextStream in(&file);
    int j = 0;
    QString Ticker = " AAPL";
    while (!in.atEnd()){
        QString line = in.readLine();
        QStringList list = line.split(" ");
        if (j == 1){
            double amount = (arg1.toDouble()/ list.at(1).toDouble());
            string displayAmount = to_string(amount);
            QString Amount = QString::fromStdString(displayAmount);
            ui->ShowDto_label->setText(Amount + Ticker);
        }
        j++;
    }
}


void HomePage::on_AAPL_input_textEdited(const QString &arg2)
{
    QFile file("/Users/Donmighster/Desktop/Coursework/tradecw/cw_stocks.txt");
    if (!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(0, "info", file.errorString());
    }
    QTextStream in(&file);
    int j = 0;
    QString currency = "$ ";
    while (!in.atEnd()){
        QString line = in.readLine();
        QStringList list = line.split(" ");
        if (j == 1){
            double dollarAmount = (arg2.toDouble() * list.at(1).toDouble());
            string displayAmount = to_string(dollarAmount);
            QString Amount = QString::fromStdString(displayAmount);
            ui->ShowAtoD_label->setText(currency + Amount);
        }
        j++;
    }
}


void HomePage::on_Dollar_input_2_textEdited(const QString &arg3)
{
    QFile file("/Users/Donmighster/Desktop/Coursework/tradecw/cw_stocks.txt");
    if (!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(0, "info", file.errorString());
    }
    QTextStream in(&file);
    int j = 0;
    QString Ticker = " AAPL";
    while (!in.atEnd()){
        QString line = in.readLine();
        QStringList list = line.split(" ");
        if (j == 1){
            double amount = (arg3.toDouble()/ list.at(1).toDouble());
            string displayAmount = to_string(amount);
            QString Amount = QString::fromStdString(displayAmount);
            ui->ShowDto_label_2->setText(Amount + Ticker);
        }
        j++;
    }
}




void HomePage::on_AAPL_input_2_textEdited(const QString &arg4)
{
    QFile file("/Users/Donmighster/Desktop/Coursework/tradecw/cw_stocks.txt");
    if (!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(0, "info", file.errorString());
    }
    QTextStream in(&file);
    int j = 0;
    QString currency = "$ ";
    while (!in.atEnd()){
        QString line = in.readLine();
        QStringList list = line.split(" ");
        if (j == 1){
            double dollarAmount = (arg4.toDouble() * list.at(1).toDouble());
            string displayAmount = to_string(dollarAmount);
            QString Amount = QString::fromStdString(displayAmount);
            ui->ShowAtoD_label_2->setText(currency + Amount);
        }
        j++;
    }
}

void HomePage::on_BuyButton1_clicked()
{
    QMessageBox alert;
    QString value = ui->Dollar_input->text();
    if (value.toDouble() <= 0){
        alert.setText("Please enter an valid amount before you sell.");
        alert.exec();
        return;
    }
    MainWindow conn;
    conn.connOpen();
    QSqlQuery changeAssets;
    changeAssets.prepare("UPDATE USERS SET BALANCE = "
                         "BALANCE - '"+value+"', HOLDINGS = HOLDINGS + '"+value+"'");
    changeAssets.exec();
    QString Balance;
    QString Holdings;
    QSqlQuery getAssets;
    getAssets.prepare("SELECT BALANCE, HOLDINGS FROM USERS WHERE ACTIVE = 1");
    if (!getAssets.exec()){
        qWarning("%s", getAssets.lastError().text().toLocal8Bit().data());
        return;
    }
    if (getAssets.next()){
        Balance = getAssets.value(0).toString();
        Holdings = getAssets.value(1).toString();
    }
    ui->Balance_Display->setText(Balance);
    ui->Holdings_Display->setText(Holdings);
    conn.connClose();
}


void HomePage::on_BuyButton2_clicked()
{
    QMessageBox alert;
    QString value = ui->ShowAtoD_label->text();
    QStringList Split = value.split(" ");
    QString numberValue = Split.at(1);
    if (numberValue.toDouble() <= 0){
        alert.setText("Please enter an valid amount before you sell.");
        alert.exec();
        return;
    }
    MainWindow conn;
    conn.connOpen();
    QSqlQuery changeAssets;
    changeAssets.prepare("UPDATE USERS SET BALANCE = "
                         "BALANCE - '"+numberValue+"', HOLDINGS = HOLDINGS + '"+numberValue+"'");
    changeAssets.exec();
    QString Balance;
    QString Holdings;
    QSqlQuery getAssets;
    getAssets.prepare("SELECT BALANCE, HOLDINGS FROM USERS WHERE ACTIVE = 1");
    if (!getAssets.exec()){
        qWarning("%s", getAssets.lastError().text().toLocal8Bit().data());
        return;
    }
    if (getAssets.next()){
        Balance = getAssets.value(0).toString();
        Holdings = getAssets.value(1).toString();
    }
    ui->Balance_Display->setText(Balance);
    ui->Holdings_Display->setText(Holdings);
    conn.connClose();
}


void HomePage::on_SellButton1_clicked()
{
    MainWindow conn;
    conn.connOpen();
    QString value = ui->Dollar_input_2->text();
    QMessageBox alert;
    if (value.toDouble() <= 0){
        alert.setText("Please enter an valid amount before you sell.");
        alert.exec();
    } else {
        QSqlQuery getAssets;
        getAssets.prepare("SELECT BALANCE, HOLDINGS FROM USERS WHERE ACTIVE = 1");
        if (!getAssets.exec()){
            qWarning("%s", getAssets.lastError().text().toLocal8Bit().data());
            return;
        }
        if (getAssets.next()){
            QString Balance = getAssets.value(0).toString();
            QString Holdings = getAssets.value(1).toString();
            qDebug() << Balance;
            if ((Balance.toDouble() - value.toDouble()) < 0 ||
                    (Holdings.toDouble() - value.toDouble()) < 0){
                alert.setText("You have insufficient assets for this sell order.");
                alert.exec();
                return;
            } else {
                qreal newBalance = Balance.toDouble() + value.toDouble();
                string newBalance2 = to_string(newBalance);
                QString newBalance3 = QString::fromStdString(newBalance2);
                qreal newHoldings = Holdings.toDouble() - value.toDouble();
                string newHoldings2 = to_string(newHoldings);
                QString newHoldings3 = QString::fromStdString(newHoldings2);
                QSqlQuery sellAssets;
                sellAssets.prepare("UPDATE USERS SET BALANCE = '"+newBalance3+"', HOLDINGS = '"+newHoldings3+"'");
                sellAssets.exec();
                QString Balance;
                QString Holdings;
                QSqlQuery getAssets;
                getAssets.prepare("SELECT BALANCE, HOLDINGS FROM USERS WHERE ACTIVE = 1");
                if (!getAssets.exec()){
                    qWarning("%s", getAssets.lastError().text().toLocal8Bit().data());
                    return;
                }
                if (getAssets.next()){
                    Balance = getAssets.value(0).toString();
                    Holdings = getAssets.value(1).toString();
                }
                ui->Balance_Display->setText(Balance);
                ui->Holdings_Display->setText(Holdings);
            }
        }
    }
    conn.connClose();
}


void HomePage::on_SellButton2_clicked()
{
    MainWindow conn;
    conn.connOpen();
    QString value = ui->ShowAtoD_label_2->text();
    QStringList Split = value.split(" ");
    QString numberValue = Split.at(1);
    QMessageBox alert;
    if (numberValue.toDouble() <= 0){
        alert.setText("Please enter an valid amount before you sell.");
        alert.exec();
    } else {
        QSqlQuery getAssets;
        getAssets.prepare("SELECT BALANCE, HOLDINGS FROM USERS WHERE ACTIVE = 1");
        if (!getAssets.exec()){
            qWarning("%s", getAssets.lastError().text().toLocal8Bit().data());
            return;
        }
        if (getAssets.next()){
            QString Balance = getAssets.value(0).toString();
            QString Holdings = getAssets.value(1).toString();
            qDebug() << Balance;
            if ((Balance.toDouble() - numberValue.toDouble()) < 0 ||
                    (Holdings.toDouble() - numberValue.toDouble()) < 0){
                alert.setText("You have insufficient assets for this sell order.");
                alert.exec();
                return;
            } else {
                qreal newBalance = Balance.toDouble() + numberValue.toDouble();
                string newBalance2 = to_string(newBalance);
                QString newBalance3 = QString::fromStdString(newBalance2);
                qreal newHoldings = Holdings.toDouble() - numberValue.toDouble();
                string newHoldings2 = to_string(newHoldings);
                QString newHoldings3 = QString::fromStdString(newHoldings2);
                QSqlQuery sellAssets;
                sellAssets.prepare("UPDATE USERS SET BALANCE = '"+newBalance3+"', HOLDINGS = '"+newHoldings3+"'");
                sellAssets.exec();
                QString Balance;
                QString Holdings;
                QSqlQuery getAssets;
                getAssets.prepare("SELECT BALANCE, HOLDINGS FROM USERS WHERE ACTIVE = 1");
                if (!getAssets.exec()){
                    qWarning("%s", getAssets.lastError().text().toLocal8Bit().data());
                    return;
                }
                if (getAssets.next()){
                    Balance = getAssets.value(0).toString();
                    Holdings = getAssets.value(1).toString();
                }
                ui->Balance_Display->setText(Balance);
                ui->Holdings_Display->setText(Holdings);
            }
        }
    }
    conn.connClose();
}

