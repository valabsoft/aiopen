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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAbout
{
public:
    QLabel *lbAbout;
    QPushButton *pbOK;
    QWidget *widget;
    QVBoxLayout *vlTitle;
    QLabel *lbTitle;
    QLabel *lbVersion;
    QWidget *widget1;
    QVBoxLayout *vlAuthors;
    QLabel *lbAuthorsTitle;
    QLabel *lbAuthors;
    QLabel *label;
    QLabel *lbCopyright;

    void setupUi(QDialog *DialogAbout)
    {
        if (DialogAbout->objectName().isEmpty())
            DialogAbout->setObjectName(QString::fromUtf8("DialogAbout"));
        DialogAbout->resize(400, 400);
        lbAbout = new QLabel(DialogAbout);
        lbAbout->setObjectName(QString::fromUtf8("lbAbout"));
        lbAbout->setGeometry(QRect(10, 10, 128, 128));
        lbAbout->setMinimumSize(QSize(128, 128));
        lbAbout->setMaximumSize(QSize(128, 128));
        lbAbout->setFrameShape(QFrame::StyledPanel);
        lbAbout->setPixmap(QPixmap(QString::fromUtf8(":/images/png/ai.png")));
        lbAbout->setAlignment(Qt::AlignCenter);
        pbOK = new QPushButton(DialogAbout);
        pbOK->setObjectName(QString::fromUtf8("pbOK"));
        pbOK->setGeometry(QRect(130, 350, 131, 32));
        QFont font;
        font.setPointSize(11);
        pbOK->setFont(font);
        widget = new QWidget(DialogAbout);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(160, 50, 222, 50));
        vlTitle = new QVBoxLayout(widget);
        vlTitle->setObjectName(QString::fromUtf8("vlTitle"));
        vlTitle->setContentsMargins(0, 0, 0, 0);
        lbTitle = new QLabel(widget);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        lbTitle->setFont(font1);
        lbTitle->setAlignment(Qt::AlignCenter);

        vlTitle->addWidget(lbTitle);

        lbVersion = new QLabel(widget);
        lbVersion->setObjectName(QString::fromUtf8("lbVersion"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbVersion->sizePolicy().hasHeightForWidth());
        lbVersion->setSizePolicy(sizePolicy);
        lbVersion->setMinimumSize(QSize(220, 0));
        lbVersion->setAlignment(Qt::AlignCenter);

        vlTitle->addWidget(lbVersion);

        widget1 = new QWidget(DialogAbout);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(160, 160, 222, 168));
        vlAuthors = new QVBoxLayout(widget1);
        vlAuthors->setObjectName(QString::fromUtf8("vlAuthors"));
        vlAuthors->setContentsMargins(0, 0, 0, 0);
        lbAuthorsTitle = new QLabel(widget1);
        lbAuthorsTitle->setObjectName(QString::fromUtf8("lbAuthorsTitle"));
        sizePolicy.setHeightForWidth(lbAuthorsTitle->sizePolicy().hasHeightForWidth());
        lbAuthorsTitle->setSizePolicy(sizePolicy);
        lbAuthorsTitle->setMinimumSize(QSize(220, 0));
        lbAuthorsTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        vlAuthors->addWidget(lbAuthorsTitle);

        lbAuthors = new QLabel(widget1);
        lbAuthors->setObjectName(QString::fromUtf8("lbAuthors"));
        sizePolicy.setHeightForWidth(lbAuthors->sizePolicy().hasHeightForWidth());
        lbAuthors->setSizePolicy(sizePolicy);
        lbAuthors->setMinimumSize(QSize(220, 0));
        lbAuthors->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbAuthors->setWordWrap(true);

        vlAuthors->addWidget(lbAuthors);

        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(200, 68));
        label->setMaximumSize(QSize(220, 68));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/png/sevsu.png")));
        label->setScaledContents(true);

        vlAuthors->addWidget(label);

        lbCopyright = new QLabel(widget1);
        lbCopyright->setObjectName(QString::fromUtf8("lbCopyright"));
        sizePolicy.setHeightForWidth(lbCopyright->sizePolicy().hasHeightForWidth());
        lbCopyright->setSizePolicy(sizePolicy);
        lbCopyright->setMinimumSize(QSize(220, 0));
        lbCopyright->setAlignment(Qt::AlignCenter);

        vlAuthors->addWidget(lbCopyright);


        retranslateUi(DialogAbout);

        QMetaObject::connectSlotsByName(DialogAbout);
    } // setupUi

    void retranslateUi(QDialog *DialogAbout)
    {
        DialogAbout->setWindowTitle(QCoreApplication::translate("DialogAbout", "Dialog", nullptr));
        lbAbout->setText(QString());
        pbOK->setText(QCoreApplication::translate("DialogAbout", "OK", nullptr));
        lbTitle->setText(QCoreApplication::translate("DialogAbout", "AI Biology Processor", nullptr));
        lbVersion->setText(QCoreApplication::translate("DialogAbout", "\320\222\320\265\321\200\321\201\320\270\321\217: 2.0", nullptr));
        lbAuthorsTitle->setText(QCoreApplication::translate("DialogAbout", "\320\232\320\276\320\273\320\273\320\265\320\272\321\202\320\270\320\262 \320\260\320\262\321\202\320\276\321\200\320\276\320\262:", nullptr));
        lbAuthors->setText(QCoreApplication::translate("DialogAbout", "\320\222.\320\237. \320\225\320\262\321\201\321\202\320\270\320\263\320\275\320\265\320\265\320\262, \320\237.\320\235. \320\232\321\203\320\267\320\275\320\265\321\206\320\276\320\262, \320\222.\320\241. \320\234\321\203\321\205\320\260\320\275\320\276\320\262, \320\224.\320\256. \320\232\320\276\321\202\320\265\320\273\321\214\320\275\320\270\320\272\320\276\320\262, \320\224.\320\256. \320\222\320\276\321\200\320\276\320\275\320\270\320\275, \320\222.\320\222. \320\220\320\273\321\214\321\207\320\260\320\272\320\276\320\262", nullptr));
        label->setText(QString());
        lbCopyright->setText(QCoreApplication::translate("DialogAbout", "\302\251 2024 \320\241\320\265\320\262\320\223\320\243. \320\222\321\201\320\265 \320\277\321\200\320\260\320\262\320\260 \320\267\320\260\321\211\320\270\321\211\320\265\320\275\321\213.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAbout: public Ui_DialogAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGABOUT_H
