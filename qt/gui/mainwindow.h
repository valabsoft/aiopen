#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QStandardItemModel>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

#include <dialogabout.h>
#include <dialogchart.h>
#include <dialogmorpho.h>
#include <dialogsettings.h>

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

    void on_pbSettings_clicked();

private:
    Ui::MainWindow *ui;
    DialogAbout *aboutDlg;
    DialogChart *chartDlg;
    DialogMorpho *morphoDlg;
    DialogSettings *settingsDlg;
    bool isStarted = false;
    bool isMorpho = true;
};
#endif // MAINWINDOW_H
