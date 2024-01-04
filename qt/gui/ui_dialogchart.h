/********************************************************************************
** Form generated from reading UI file 'dialogchart.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCHART_H
#define UI_DIALOGCHART_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_DialogChart
{
public:
    QChartView *gvChart;

    void setupUi(QDialog *DialogChart)
    {
        if (DialogChart->objectName().isEmpty())
            DialogChart->setObjectName(QString::fromUtf8("DialogChart"));
        DialogChart->resize(850, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogChart->sizePolicy().hasHeightForWidth());
        DialogChart->setSizePolicy(sizePolicy);
        DialogChart->setMinimumSize(QSize(850, 500));
        DialogChart->setMaximumSize(QSize(850, 500));
        gvChart = new QChartView(DialogChart);
        gvChart->setObjectName(QString::fromUtf8("gvChart"));
        gvChart->setEnabled(true);
        gvChart->setGeometry(QRect(0, 0, 800, 500));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gvChart->sizePolicy().hasHeightForWidth());
        gvChart->setSizePolicy(sizePolicy1);
        gvChart->setMinimumSize(QSize(800, 500));
        gvChart->setMaximumSize(QSize(16777215, 220));
        gvChart->setFrameShape(QFrame::NoFrame);
        gvChart->setFrameShadow(QFrame::Sunken);

        retranslateUi(DialogChart);

        QMetaObject::connectSlotsByName(DialogChart);
    } // setupUi

    void retranslateUi(QDialog *DialogChart)
    {
        DialogChart->setWindowTitle(QCoreApplication::translate("DialogChart", "AI Biology Processor 2.0 :: \320\232\320\273\320\260\321\201\321\201\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogChart: public Ui_DialogChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCHART_H
