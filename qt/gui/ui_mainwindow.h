/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *gbSpecies;
    QFormLayout *formLayout;
    QLabel *lbSpecies;
    QListView *lvSpecies;
    QChartView *gvChart;
    QGroupBox *gbControl;
    QFormLayout *formLayout_2;
    QGroupBox *gbStreamControl;
    QLCDNumber *lcdFlow;
    QPushButton *pbUp;
    QPushButton *pbDown;
    QLabel *lbFlow;
    QPushButton *pbStartStop;
    QLabel *label;
    QLabel *lbCopyright;
    QPushButton *pbSettings;
    QPushButton *pbReport;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(850, 500);
        MainWindow->setMinimumSize(QSize(850, 500));
        MainWindow->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gbSpecies = new QGroupBox(centralwidget);
        gbSpecies->setObjectName(QString::fromUtf8("gbSpecies"));
        gbSpecies->setGeometry(QRect(10, 10, 531, 481));
        formLayout = new QFormLayout(gbSpecies);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lbSpecies = new QLabel(gbSpecies);
        lbSpecies->setObjectName(QString::fromUtf8("lbSpecies"));
        lbSpecies->setMinimumSize(QSize(300, 470));
        lbSpecies->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, lbSpecies);

        lvSpecies = new QListView(gbSpecies);
        lvSpecies->setObjectName(QString::fromUtf8("lvSpecies"));
        lvSpecies->setMinimumSize(QSize(0, 230));
        lvSpecies->setMaximumSize(QSize(16777215, 150));

        formLayout->setWidget(0, QFormLayout::FieldRole, lvSpecies);

        gvChart = new QChartView(gbSpecies);
        gvChart->setObjectName(QString::fromUtf8("gvChart"));
        gvChart->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gvChart->sizePolicy().hasHeightForWidth());
        gvChart->setSizePolicy(sizePolicy);
        gvChart->setMinimumSize(QSize(0, 220));
        gvChart->setMaximumSize(QSize(16777215, 220));
        gvChart->setFrameShape(QFrame::StyledPanel);
        gvChart->setFrameShadow(QFrame::Plain);

        formLayout->setWidget(1, QFormLayout::FieldRole, gvChart);

        gbControl = new QGroupBox(centralwidget);
        gbControl->setObjectName(QString::fromUtf8("gbControl"));
        gbControl->setGeometry(QRect(550, 10, 241, 481));
        formLayout_2 = new QFormLayout(gbControl);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        gbStreamControl = new QGroupBox(gbControl);
        gbStreamControl->setObjectName(QString::fromUtf8("gbStreamControl"));
        gbStreamControl->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gbStreamControl->sizePolicy().hasHeightForWidth());
        gbStreamControl->setSizePolicy(sizePolicy1);
        gbStreamControl->setMinimumSize(QSize(200, 170));
        QFont font;
        font.setPointSize(16);
        font.setItalic(true);
        gbStreamControl->setFont(font);
        lcdFlow = new QLCDNumber(gbStreamControl);
        lcdFlow->setObjectName(QString::fromUtf8("lcdFlow"));
        lcdFlow->setGeometry(QRect(60, 40, 101, 50));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lcdFlow->sizePolicy().hasHeightForWidth());
        lcdFlow->setSizePolicy(sizePolicy2);
        lcdFlow->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(16);
        font1.setItalic(false);
        lcdFlow->setFont(font1);
        lcdFlow->setLayoutDirection(Qt::RightToLeft);
        lcdFlow->setFrameShape(QFrame::StyledPanel);
        lcdFlow->setFrameShadow(QFrame::Raised);
        lcdFlow->setLineWidth(2);
        lcdFlow->setSmallDecimalPoint(true);
        lcdFlow->setDigitCount(4);
        lcdFlow->setMode(QLCDNumber::Dec);
        lcdFlow->setSegmentStyle(QLCDNumber::Flat);
        lcdFlow->setProperty("value", QVariant(0.000000000000000));
        lcdFlow->setProperty("intValue", QVariant(0));
        pbUp = new QPushButton(gbStreamControl);
        pbUp->setObjectName(QString::fromUtf8("pbUp"));
        pbUp->setGeometry(QRect(10, 40, 41, 51));
        QFont font2;
        font2.setPointSize(10);
        font2.setItalic(false);
        pbUp->setFont(font2);
        pbDown = new QPushButton(gbStreamControl);
        pbDown->setObjectName(QString::fromUtf8("pbDown"));
        pbDown->setGeometry(QRect(170, 40, 41, 51));
        pbDown->setFont(font2);
        lbFlow = new QLabel(gbStreamControl);
        lbFlow->setObjectName(QString::fromUtf8("lbFlow"));
        lbFlow->setGeometry(QRect(68, 90, 91, 20));
        QFont font3;
        font3.setPointSize(8);
        font3.setItalic(false);
        lbFlow->setFont(font3);
        lbFlow->setAlignment(Qt::AlignCenter);
        pbStartStop = new QPushButton(gbStreamControl);
        pbStartStop->setObjectName(QString::fromUtf8("pbStartStop"));
        pbStartStop->setGeometry(QRect(10, 120, 200, 40));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pbStartStop->sizePolicy().hasHeightForWidth());
        pbStartStop->setSizePolicy(sizePolicy3);
        pbStartStop->setMinimumSize(QSize(200, 40));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setItalic(false);
        pbStartStop->setFont(font4);

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, gbStreamControl);

        label = new QLabel(gbControl);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(200, 68));
        label->setMaximumSize(QSize(220, 68));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/png/sevsu.png")));
        label->setScaledContents(true);

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, label);

        lbCopyright = new QLabel(gbControl);
        lbCopyright->setObjectName(QString::fromUtf8("lbCopyright"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lbCopyright->sizePolicy().hasHeightForWidth());
        lbCopyright->setSizePolicy(sizePolicy4);
        lbCopyright->setMinimumSize(QSize(220, 0));
        lbCopyright->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, lbCopyright);

        pbSettings = new QPushButton(gbControl);
        pbSettings->setObjectName(QString::fromUtf8("pbSettings"));
        sizePolicy3.setHeightForWidth(pbSettings->sizePolicy().hasHeightForWidth());
        pbSettings->setSizePolicy(sizePolicy3);
        pbSettings->setMinimumSize(QSize(221, 40));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(false);
        pbSettings->setFont(font5);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pbSettings);

        pbReport = new QPushButton(gbControl);
        pbReport->setObjectName(QString::fromUtf8("pbReport"));
        sizePolicy3.setHeightForWidth(pbReport->sizePolicy().hasHeightForWidth());
        pbReport->setSizePolicy(sizePolicy3);
        pbReport->setMinimumSize(QSize(221, 40));
        QFont font6;
        font6.setPointSize(12);
        pbReport->setFont(font6);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pbReport);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AI Biology Processor 2.0", nullptr));
        lbSpecies->setText(QCoreApplication::translate("MainWindow", "STREAM", nullptr));
        gbStreamControl->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\236\320\235\320\242\320\240\320\236\320\233\320\254 \320\237\320\236\320\242\320\236\320\232\320\220", nullptr));
        pbUp->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        pbDown->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        lbFlow->setText(QCoreApplication::translate("MainWindow", "\320\274\320\273/\320\274\320\270\320\275", nullptr));
        pbStartStop->setText(QCoreApplication::translate("MainWindow", "\320\241\320\242\320\220\320\240\320\242", nullptr));
        label->setText(QString());
        lbCopyright->setText(QCoreApplication::translate("MainWindow", "\302\251 2024 \320\241\320\265\320\262\320\223\320\243. \320\222\321\201\320\265 \320\277\321\200\320\260\320\262\320\260 \320\267\320\260\321\211\320\270\321\211\320\265\320\275\321\213.", nullptr));
        pbSettings->setText(QCoreApplication::translate("MainWindow", "\320\235\320\220\320\241\320\242\320\240\320\236\320\231\320\232\320\230", nullptr));
        pbReport->setText(QCoreApplication::translate("MainWindow", "\320\236\320\242\320\247\320\225\320\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H