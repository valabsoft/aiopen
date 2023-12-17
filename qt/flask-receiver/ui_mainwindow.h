/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lbSevSULogo;
    QLabel *lbCopyright;
    QLabel *lblCamera;
    QLineEdit *edIPCamera;
    QPushButton *btnConnect;
    QLabel *lbCopyright_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 800);
        MainWindow->setMinimumSize(QSize(800, 800));
        MainWindow->setMaximumSize(QSize(800, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lbSevSULogo = new QLabel(centralwidget);
        lbSevSULogo->setObjectName(QString::fromUtf8("lbSevSULogo"));
        lbSevSULogo->setGeometry(QRect(430, 670, 293, 90));
        lbSevSULogo->setPixmap(QPixmap(QString::fromUtf8(":/images/png/sevsu.png")));
        lbSevSULogo->setScaledContents(true);
        lbCopyright = new QLabel(centralwidget);
        lbCopyright->setObjectName(QString::fromUtf8("lbCopyright"));
        lbCopyright->setGeometry(QRect(520, 750, 202, 16));
        lbCopyright->setAlignment(Qt::AlignCenter);
        lblCamera = new QLabel(centralwidget);
        lblCamera->setObjectName(QString::fromUtf8("lblCamera"));
        lblCamera->setGeometry(QRect(80, 80, 640, 480));
        lblCamera->setAutoFillBackground(true);
        lblCamera->setStyleSheet(QString::fromUtf8(""));
        lblCamera->setAlignment(Qt::AlignCenter);
        edIPCamera = new QLineEdit(centralwidget);
        edIPCamera->setObjectName(QString::fromUtf8("edIPCamera"));
        edIPCamera->setGeometry(QRect(80, 570, 321, 31));
        QFont font;
        font.setPointSize(12);
        edIPCamera->setFont(font);
        edIPCamera->setAlignment(Qt::AlignCenter);
        btnConnect = new QPushButton(centralwidget);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
        btnConnect->setGeometry(QRect(420, 570, 301, 32));
        btnConnect->setFont(font);
        lbCopyright_2 = new QLabel(centralwidget);
        lbCopyright_2->setObjectName(QString::fromUtf8("lbCopyright_2"));
        lbCopyright_2->setGeometry(QRect(80, 20, 640, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(22);
        font1.setBold(false);
        lbCopyright_2->setFont(font1);
        lbCopyright_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);
        lblCamera->raise();
        lbSevSULogo->raise();
        lbCopyright->raise();
        edIPCamera->raise();
        btnConnect->raise();
        lbCopyright_2->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Live Streaming with a Webcam", nullptr));
        lbSevSULogo->setText(QString());
        lbCopyright->setText(QCoreApplication::translate("MainWindow", "\302\251 2023 \320\241\320\265\320\262\320\223\320\243. \320\222\321\201\320\265 \320\277\321\200\320\260\320\262\320\260 \320\267\320\260\321\211\320\270\321\211\320\265\320\275\321\213.", nullptr));
        lblCamera->setText(QCoreApplication::translate("MainWindow", "CAMERA", nullptr));
        edIPCamera->setText(QCoreApplication::translate("MainWindow", "http://localhost:5000/video_feed", nullptr));
        btnConnect->setText(QCoreApplication::translate("MainWindow", "\320\243\320\241\320\242\320\220\320\235\320\236\320\222\320\230\320\242\320\254 \320\241\320\236\320\225\320\224\320\230\320\235\320\225\320\235\320\230\320\225", nullptr));
        lbCopyright_2->setText(QCoreApplication::translate("MainWindow", "Live Streaming with a Webcam", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
