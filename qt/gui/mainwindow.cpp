#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Фиксируем размер окна
    setFixedSize(QSize(800, 500));

    // Центрируем окно в пределах экрана
    move(screen()->geometry().center() - frameGeometry().center());


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
    ui->pbStartStop->setFont(fontButton);

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

    ui->pbAbout->setIcon(QIcon(":/images/png/info-icon.png"));
    ui->pbAbout->setIconSize(QSize(18, 18));
    ui->pbChartZoom->setIcon(QIcon(":/images/png/binoculars-icon.png"));
    ui->pbChartZoom->setIconSize(QSize(18, 18));

    // Иконка приложения
    setWindowIcon(QIcon(":/images/png/chemistry-icon.png"));    

    QStandardItemModel *model = new QStandardItemModel(this);
    ui->lvSpecies->setModel(model);
    ui->lvSpecies->setFont(fontSmall);
    model->appendRow(new QStandardItem(QIcon(":/images/bul/bul01.png"), "nauplius\t\t23"));
    model->appendRow(new QStandardItem(QIcon(":/images/bul/bul02.png"), "copepoda\t\t16"));
    model->appendRow(new QStandardItem(QIcon(":/images/bul/bul03.png"), "synchaeta\t\t22"));
    model->appendRow(new QStandardItem(QIcon(":/images/bul/bul04.png"), "filament\t\t5"));
    model->appendRow(new QStandardItem(QIcon(":/images/bul/bul05.png"), "damage\t\t7"));
    model->appendRow(new QStandardItem(QIcon(":/images/bul/bul06.png"), "bubble\t\t21"));
    model->appendRow(new QStandardItem(QIcon(":/images/bul/bul07.png"), "evadne\t\t5"));

    // ========================================================================
    // https://stackoverflow.com/questions/48362864/how-to-insert-qchartview-in-form-with-qt-designer
    // ========================================================================
    // Chart
    // ========================================================================

    auto setNauplius = new QBarSet("Nauplius");
    auto setCopepoda = new QBarSet("Copepoda");
    auto setSynchaeta = new QBarSet("Synchaeta");
    auto setFilament = new QBarSet("Filament");
    auto setDamage = new QBarSet("Damage");
    auto setBubble = new QBarSet("Bubble");
    auto setEvadne = new QBarSet("Evadne");

    // Заполняем данными    
    *setNauplius << 23;
    *setCopepoda << 16;
    *setSynchaeta << 22;
    *setFilament << 5;
    *setDamage << 7;
    *setBubble << 21;
    *setEvadne << 5;

    // auto series = new QHorizontalBarSeries;
    auto series = new QBarSeries();
    series->append(setNauplius);
    series->append(setCopepoda);
    series->append(setSynchaeta);
    series->append(setFilament);
    series->append(setDamage);
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

    // About Dialog
    aboutDlg = new DialogAbout(this);
    // Chart Dialog
    chartDlg = new DialogChart(this);
    // Morphological Dialog
    morphoDlg = new DialogMorpho(this);
    // Settings Dialog
    settingsDlg = new DialogSettings(this);
}

MainWindow::~MainWindow()
{
    delete aboutDlg;
    delete chartDlg;
    delete morphoDlg;
    delete settingsDlg;

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
    {
        ui->pbStartStop->setText("СТАРТ");
        if (isMorpho)
        {
            morphoDlg->show();
            morphoDlg->activateWindow();
        }
    }
}

void MainWindow::on_pbAbout_clicked()
{
    aboutDlg->show();
    aboutDlg->activateWindow();
}

void MainWindow::on_pbChartZoom_clicked()
{
    chartDlg->show();
    chartDlg->activateWindow();
}


void MainWindow::on_pbSettings_clicked()
{
    settingsDlg->show();
    settingsDlg->activateWindow();
}

