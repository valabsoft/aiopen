/********************************************************************************
** Form generated from reading UI file 'dialogabout.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGABOUT_H
#define UI_DIALOGABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAbout
{
public:
    QLabel *lbTitle;
    QLabel *lbAbout;
    QLabel *lbCopyright;
    QPushButton *pbOK;

    void setupUi(QDialog *DialogAbout)
    {
        if (DialogAbout->objectName().isEmpty())
            DialogAbout->setObjectName(QString::fromUtf8("DialogAbout"));
        DialogAbout->resize(320, 240);
        lbTitle = new QLabel(DialogAbout);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        lbTitle->setGeometry(QRect(50, 10, 231, 30));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        lbTitle->setFont(font);
        lbTitle->setAlignment(Qt::AlignCenter);
        lbAbout = new QLabel(DialogAbout);
        lbAbout->setObjectName(QString::fromUtf8("lbAbout"));
        lbAbout->setGeometry(QRect(100, 40, 128, 128));
        lbAbout->setMinimumSize(QSize(128, 128));
        lbAbout->setMaximumSize(QSize(128, 128));
        lbAbout->setFrameShape(QFrame::StyledPanel);
        lbAbout->setPixmap(QPixmap(QString::fromUtf8(":/images/png/ai.png")));
        lbAbout->setAlignment(Qt::AlignCenter);
        lbCopyright = new QLabel(DialogAbout);
        lbCopyright->setObjectName(QString::fromUtf8("lbCopyright"));
        lbCopyright->setGeometry(QRect(50, 170, 220, 16));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbCopyright->sizePolicy().hasHeightForWidth());
        lbCopyright->setSizePolicy(sizePolicy);
        lbCopyright->setMinimumSize(QSize(220, 0));
        lbCopyright->setAlignment(Qt::AlignCenter);
        pbOK = new QPushButton(DialogAbout);
        pbOK->setObjectName(QString::fromUtf8("pbOK"));
        pbOK->setGeometry(QRect(99, 190, 131, 32));
        QFont font1;
        font1.setPointSize(11);
        pbOK->setFont(font1);

        retranslateUi(DialogAbout);

        QMetaObject::connectSlotsByName(DialogAbout);
    } // setupUi

    void retranslateUi(QDialog *DialogAbout)
    {
        DialogAbout->setWindowTitle(QCoreApplication::translate("DialogAbout", "Dialog", nullptr));
        lbTitle->setText(QCoreApplication::translate("DialogAbout", "AI Biology Processor 2.0", nullptr));
        lbAbout->setText(QString());
        lbCopyright->setText(QCoreApplication::translate("DialogAbout", "\302\251 2024 \320\241\320\265\320\262\320\223\320\243. \320\222\321\201\320\265 \320\277\321\200\320\260\320\262\320\260 \320\267\320\260\321\211\320\270\321\211\320\265\320\275\321\213.", nullptr));
        pbOK->setText(QCoreApplication::translate("DialogAbout", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAbout: public Ui_DialogAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGABOUT_H
