/********************************************************************************
** Form generated from reading UI file 'dialogmorpho.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMORPHO_H
#define UI_DIALOGMORPHO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogMorpho
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QListView *lvTable;
    QLabel *lbImage;
    QListWidget *lvImage;

    void setupUi(QDialog *DialogMorpho)
    {
        if (DialogMorpho->objectName().isEmpty())
            DialogMorpho->setObjectName(QString::fromUtf8("DialogMorpho"));
        DialogMorpho->resize(850, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogMorpho->sizePolicy().hasHeightForWidth());
        DialogMorpho->setSizePolicy(sizePolicy);
        DialogMorpho->setMinimumSize(QSize(850, 500));
        DialogMorpho->setMaximumSize(QSize(850, 500));
        verticalLayout_2 = new QVBoxLayout(DialogMorpho);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lvTable = new QListView(DialogMorpho);
        lvTable->setObjectName(QString::fromUtf8("lvTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lvTable->sizePolicy().hasHeightForWidth());
        lvTable->setSizePolicy(sizePolicy1);
        lvTable->setMinimumSize(QSize(210, 0));
        lvTable->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(lvTable);

        lbImage = new QLabel(DialogMorpho);
        lbImage->setObjectName(QString::fromUtf8("lbImage"));
        sizePolicy.setHeightForWidth(lbImage->sizePolicy().hasHeightForWidth());
        lbImage->setSizePolicy(sizePolicy);
        lbImage->setMinimumSize(QSize(210, 210));
        lbImage->setMaximumSize(QSize(210, 210));
        lbImage->setFrameShape(QFrame::StyledPanel);
        lbImage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbImage);


        horizontalLayout->addLayout(verticalLayout);

        lvImage = new QListWidget(DialogMorpho);
        lvImage->setObjectName(QString::fromUtf8("lvImage"));

        horizontalLayout->addWidget(lvImage);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(DialogMorpho);

        QMetaObject::connectSlotsByName(DialogMorpho);
    } // setupUi

    void retranslateUi(QDialog *DialogMorpho)
    {
        DialogMorpho->setWindowTitle(QCoreApplication::translate("DialogMorpho", "Dialog", nullptr));
        lbImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogMorpho: public Ui_DialogMorpho {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMORPHO_H
