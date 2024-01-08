#include "dialogchart.h"
#include "qscreen.h"
#include "ui_dialogchart.h"

DialogChart::DialogChart(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogChart)
{
    ui->setupUi(this);

    // Фиксируем размер окна
    setFixedSize(QSize(800, 500));

    // Центрируем окно в пределах экрана
    move(screen()->geometry().center() - frameGeometry().center());

    setWindowTitle("AI Biology Processor 2.0 :: Классификация");

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
    // chart->setTitle("Классификация");
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

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);


    ui->gvChart->setChart(chart);
}

DialogChart::~DialogChart()
{
    delete ui;
}
