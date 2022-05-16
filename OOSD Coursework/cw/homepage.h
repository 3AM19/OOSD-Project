#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include "mainwindow.h"

namespace Ui {
class HomePage;
}

class HomePage : public QDialog
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);
    ~HomePage();

private slots:
    void on_pushButton_clicked();

    void on_Dollar_input_textEdited(const QString &arg1);

    void on_AAPL_input_textEdited(const QString &arg2);

    void on_Dollar_input_2_textEdited(const QString &arg3);

    void on_AAPL_input_2_textEdited(const QString &arg4);

    void on_BuyButton1_clicked();

    void on_BuyButton2_clicked();

    void on_SellButton1_clicked();

    void on_SellButton2_clicked();

private:
    Ui::HomePage *ui;
};

#endif // HOMEPAGE_H
