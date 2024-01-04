#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QtCharts/QBarSet>
// #include <QtCharts/QHorizontalBarSeries>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

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

private:
    Ui::MainWindow *ui;
    bool isStarted = false;
};
#endif // MAINWINDOW_H