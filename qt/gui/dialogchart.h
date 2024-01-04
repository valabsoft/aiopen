#ifndef DIALOGCHART_H
#define DIALOGCHART_H

#include <QDialog>
#include <QMainWindow>

#include <QStringListModel>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

namespace Ui {
class DialogChart;
}

class DialogChart : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChart(QWidget *parent = nullptr);
    ~DialogChart();

private:
    Ui::DialogChart *ui;
};

#endif // DIALOGCHART_H
