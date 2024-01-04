#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(QSize(800, 500));

    // Загрузка шрифта для заголовков
    QFont fontTitle("GOST type A", 20, QFont::Bold);
    QFont fontButton("GOST type A", 20, QFont::Normal);
    QFont fontSmall("GOST type B", 11, QFont::Normal);

    // Метки
    ui->gbStreamControl->setFont(fontTitle);
    ui->lbFlow->setFont(fontSmall);

    // Кнопки
    ui->pbSettings->setFont(fontButton);
    ui->pbReport->setFont(fontButton);
    ui->pbStartStop->setFont(fontTitle);

    // Установка индикатора скорости потока
    ui->lcdFlow->setSmallDecimalPoint(true);
    ui->lcdFlow->display(0.15);

    // Работа с кнопками

    ui->pbUp->setIcon(QIcon(":/images/png/arrow-up.png"));
    ui->pbUp->setIconSize(QSize(24, 24));
    ui->pbUp->setText("");

    ui->pbDown->setIcon(QIcon(":/images/png/arrow-down.png"));
    ui->pbDown->setIconSize(QSize(24, 24));
    ui->pbDown->setText("");

    ui->pbSettings->setIcon(QIcon(":/images/png/bt-settings.png"));
    ui->pbSettings->setIconSize(QSize(48, 48));
    ui->pbReport->setIcon(QIcon(":/images/png/bt-report.png"));
    ui->pbReport->setIconSize(QSize(48, 48));

    // Иконка приложения
    setWindowIcon(QIcon(":/images/png/chemistry-icon.png"));

    QStringListModel *model = new QStringListModel(this);
    QStringList list;
    list << "damage\t\t7";
    list << "synchaeta\t\t22";
    list << "copepoda\t\t16";
    list << "filament\t\t5";
    list << "nauplius\t\t23";
    list << "bubble\t\t21";
    list << "evadne\t\t5";
    model->setStringList(list);
    ui->lvSpecies->setModel(model);
    ui->lvSpecies->setFont(fontSmall);

    // ========================================================================
    // https://stackoverflow.com/questions/48362864/how-to-insert-qchartview-in-form-with-qt-designer
    // ========================================================================
    // Chart
    // ========================================================================

    auto setDamage = new QBarSet("Damage");
    auto setSynchaeta = new QBarSet("Synchaeta");
    auto setCopepoda = new QBarSet("Copepoda");
    auto setFilament = new QBarSet("Filament");
    auto setNauplius = new QBarSet("Nauplius");
    auto setBubble = new QBarSet("Bubble");
    auto setEvadne = new QBarSet("Evadne");

    // Заполняем данными
    *setDamage << 7;
    *setSynchaeta << 22;
    *setCopepoda << 16;
    *setFilament << 5;
    *setNauplius << 23;
    *setBubble << 21;
    *setEvadne << 5;

    // auto series = new QHorizontalBarSeries;
    auto series = new QBarSeries();
    series->append(setDamage);
    series->append(setSynchaeta);
    series->append(setCopepoda);
    series->append(setFilament);
    series->append(setNauplius);
    series->append(setBubble);
    series->append(setEvadne);

    auto chart = new QChart;    
    chart->addSeries(series);
    chart->setTitle("Классификация");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->setContentsMargins(-10, -10, -10, -10);
    chart->setBackgroundRoundness(0);

    QStringList categories {""};

    auto axisX = new QBarCategoryAxis;
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    auto axisY = new QValueAxis;
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    axisY->applyNiceNumbers();

    chart->legend()->setVisible(false);
    chart->legend()->setAlignment(Qt::AlignLeft);


    ui->gvChart->setChart(chart);    
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbUp_clicked()
{
    auto value = ui->lcdFlow->value();
    value += 0.01;
    ui->lcdFlow->display(value);
}


void MainWindow::on_pbDown_clicked()
{
    auto value = ui->lcdFlow->value();
    value -= 0.01;
    ui->lcdFlow->display(value);
}


void MainWindow::on_pbStartStop_clicked()
{
    isStarted = !isStarted;
    if (isStarted)
        ui->pbStartStop->setText("СТОП");
    else
        ui->pbStartStop->setText("СТАРТ");}
