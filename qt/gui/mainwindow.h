#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

#include <dialogabout.h>
#include <dialogchart.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pbUp_clicked();
    void on_pbDown_clicked();
    void on_pbStartStop_clicked();
    void on_pbAbout_clicked();
    void on_pbChartZoom_clicked();

private:
    Ui::MainWindow *ui;
    DialogAbout *aboutDlg;
    DialogChart *chartDlg;
    bool isStarted = false;
};
#endif // MAINWINDOW_H
