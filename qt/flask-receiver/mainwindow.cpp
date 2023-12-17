#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScreen>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Фиксируем размер окна и убираем иконку ресайза
    setFixedSize(QSize(800, 800));

    // Центрируем окно в пределах экрана
    move(screen()->geometry().center() - frameGeometry().center());
    ui->lbCopyright->setStyleSheet("QLabel { color: grey; }");
    ui->lblCamera->setStyleSheet("QLabel {"
                                 "border-style: solid;"
                                 "border-width: 1px;"
                                 "border-color: silver; "
                                 "}");

    videoTimer = new QTimer(this);
    connect(videoTimer, &QTimer::timeout, this, &MainWindow::OnVideoTimer);
}

MainWindow::~MainWindow()
{
    if (videoTimer->isActive())
        videoTimer->stop();

    delete videoTimer;
    delete webcam;
    delete ui;
}

void MainWindow::OnVideoTimer()
{
    webcam->read(source);

    if (source.empty())
        return;

    cv::Mat resized;
    cv::resize(source, resized, cv::Size(640, 480));

    // Image preprocessing
    cv::cvtColor(resized, destination, cv::COLOR_BGR2RGB);

    imgcam = QImage((uchar*) destination.data,
                    destination.cols,
                    destination.rows,
                    destination.step,
                    QImage::Format_RGB888);

    // Show QImage using QLabel
    ui->lblCamera->setPixmap(QPixmap::fromImage(imgcam));
}

void MainWindow::on_btnConnect_clicked()
{
    if (!cvConnected)
    {
        ui->btnConnect->setText("РАЗОРВАТЬ СОЕДИНЕНИЕ");
        cvConnected = true;

        webcam = new cv::VideoCapture(ui->edIPCamera->text().toStdString());

        if (!videoTimer->isActive())
            videoTimer->start(0);
    }
    else
    {
        ui->btnConnect->setText("УСТАНОВИТЬ СОЕДИНЕНИЕ");
        cvConnected = false;

        if (webcam->isOpened())
            webcam->release();

        if (videoTimer->isActive())
            videoTimer->stop();

        QPixmap pixmap;
        QColor color;

        // Очистка изображения
        color = QColor(255, 255, 255, 255);
        pixmap = QPixmap(ui->lblCamera->size());
        pixmap.fill(color);

        ui->lblCamera->setPixmap(pixmap);
        ui->lblCamera->setText("CAMERA");
    }
}
