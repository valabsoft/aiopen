/********************************************************************************
** Form generated from reading UI file 'dialogsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSETTINGS_H
#define UI_DIALOGSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *gbGeneral;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *vlGeneral;
    QLabel *lbImagePath;
    QHBoxLayout *hlImagePath;
    QLineEdit *leImagePath;
    QPushButton *pbImagePath;
    QGroupBox *gbFlowControl;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *vlFlowControl;
    QHBoxLayout *hlFlowInitial;
    QLabel *lbFlowInitial;
    QLineEdit *leFlowInitial;
    QSpacerItem *hsFlowInitial;
    QHBoxLayout *hlFlowStep;
    QLabel *lbFlowStep;
    QLineEdit *leFlowStep;
    QSpacerItem *hsFlowStep;
    QGroupBox *gbMorphologicalAnalysis;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *vlMorphologicalAnalysis;
    QHBoxLayout *hlMorphoType;
    QLabel *lbMorphoType;
    QComboBox *cbMorphoType;
    QSpacerItem *hsMorphoType;
    QHBoxLayout *hlMorphoAuto;
    QCheckBox *cbMorphoAuto;
    QSpacerItem *hsMorphoAuto;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbOK;
    QPushButton *pbCancel;

    void setupUi(QDialog *DialogSettings)
    {
        if (DialogSettings->objectName().isEmpty())
            DialogSettings->setObjectName(QString::fromUtf8("DialogSettings"));
        DialogSettings->resize(850, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogSettings->sizePolicy().hasHeightForWidth());
        DialogSettings->setSizePolicy(sizePolicy);
        DialogSettings->setMinimumSize(QSize(850, 500));
        DialogSettings->setMaximumSize(QSize(850, 550));
        verticalLayout_2 = new QVBoxLayout(DialogSettings);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gbGeneral = new QGroupBox(DialogSettings);
        gbGeneral->setObjectName(QString::fromUtf8("gbGeneral"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gbGeneral->sizePolicy().hasHeightForWidth());
        gbGeneral->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(gbGeneral);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        vlGeneral = new QVBoxLayout();
        vlGeneral->setObjectName(QString::fromUtf8("vlGeneral"));
        lbImagePath = new QLabel(gbGeneral);
        lbImagePath->setObjectName(QString::fromUtf8("lbImagePath"));
        lbImagePath->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        vlGeneral->addWidget(lbImagePath);

        hlImagePath = new QHBoxLayout();
        hlImagePath->setObjectName(QString::fromUtf8("hlImagePath"));
        leImagePath = new QLineEdit(gbGeneral);
        leImagePath->setObjectName(QString::fromUtf8("leImagePath"));

        hlImagePath->addWidget(leImagePath);

        pbImagePath = new QPushButton(gbGeneral);
        pbImagePath->setObjectName(QString::fromUtf8("pbImagePath"));
        sizePolicy.setHeightForWidth(pbImagePath->sizePolicy().hasHeightForWidth());
        pbImagePath->setSizePolicy(sizePolicy);
        pbImagePath->setMinimumSize(QSize(50, 0));
        pbImagePath->setMaximumSize(QSize(50, 16777215));

        hlImagePath->addWidget(pbImagePath);


        vlGeneral->addLayout(hlImagePath);


        horizontalLayout_3->addLayout(vlGeneral);


        verticalLayout->addWidget(gbGeneral);

        gbFlowControl = new QGroupBox(DialogSettings);
        gbFlowControl->setObjectName(QString::fromUtf8("gbFlowControl"));
        verticalLayout_5 = new QVBoxLayout(gbFlowControl);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        vlFlowControl = new QVBoxLayout();
        vlFlowControl->setObjectName(QString::fromUtf8("vlFlowControl"));
        hlFlowInitial = new QHBoxLayout();
        hlFlowInitial->setSpacing(6);
        hlFlowInitial->setObjectName(QString::fromUtf8("hlFlowInitial"));
        lbFlowInitial = new QLabel(gbFlowControl);
        lbFlowInitial->setObjectName(QString::fromUtf8("lbFlowInitial"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbFlowInitial->sizePolicy().hasHeightForWidth());
        lbFlowInitial->setSizePolicy(sizePolicy2);
        lbFlowInitial->setMinimumSize(QSize(200, 0));
        lbFlowInitial->setMaximumSize(QSize(200, 16777215));

        hlFlowInitial->addWidget(lbFlowInitial);

        leFlowInitial = new QLineEdit(gbFlowControl);
        leFlowInitial->setObjectName(QString::fromUtf8("leFlowInitial"));
        sizePolicy.setHeightForWidth(leFlowInitial->sizePolicy().hasHeightForWidth());
        leFlowInitial->setSizePolicy(sizePolicy);
        leFlowInitial->setMinimumSize(QSize(75, 0));
        leFlowInitial->setMaximumSize(QSize(75, 16777215));

        hlFlowInitial->addWidget(leFlowInitial);

        hsFlowInitial = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlFlowInitial->addItem(hsFlowInitial);


        vlFlowControl->addLayout(hlFlowInitial);

        hlFlowStep = new QHBoxLayout();
        hlFlowStep->setObjectName(QString::fromUtf8("hlFlowStep"));
        lbFlowStep = new QLabel(gbFlowControl);
        lbFlowStep->setObjectName(QString::fromUtf8("lbFlowStep"));
        lbFlowStep->setMinimumSize(QSize(200, 0));
        lbFlowStep->setMaximumSize(QSize(200, 16777215));

        hlFlowStep->addWidget(lbFlowStep);

        leFlowStep = new QLineEdit(gbFlowControl);
        leFlowStep->setObjectName(QString::fromUtf8("leFlowStep"));
        sizePolicy.setHeightForWidth(leFlowStep->sizePolicy().hasHeightForWidth());
        leFlowStep->setSizePolicy(sizePolicy);
        leFlowStep->setMinimumSize(QSize(75, 0));
        leFlowStep->setMaximumSize(QSize(75, 16777215));

        hlFlowStep->addWidget(leFlowStep);

        hsFlowStep = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlFlowStep->addItem(hsFlowStep);


        vlFlowControl->addLayout(hlFlowStep);


        verticalLayout_5->addLayout(vlFlowControl);


        verticalLayout->addWidget(gbFlowControl);

        gbMorphologicalAnalysis = new QGroupBox(DialogSettings);
        gbMorphologicalAnalysis->setObjectName(QString::fromUtf8("gbMorphologicalAnalysis"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(gbMorphologicalAnalysis->sizePolicy().hasHeightForWidth());
        gbMorphologicalAnalysis->setSizePolicy(sizePolicy3);
        verticalLayout_7 = new QVBoxLayout(gbMorphologicalAnalysis);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        vlMorphologicalAnalysis = new QVBoxLayout();
        vlMorphologicalAnalysis->setObjectName(QString::fromUtf8("vlMorphologicalAnalysis"));
        hlMorphoType = new QHBoxLayout();
        hlMorphoType->setSpacing(6);
        hlMorphoType->setObjectName(QString::fromUtf8("hlMorphoType"));
        lbMorphoType = new QLabel(gbMorphologicalAnalysis);
        lbMorphoType->setObjectName(QString::fromUtf8("lbMorphoType"));
        sizePolicy2.setHeightForWidth(lbMorphoType->sizePolicy().hasHeightForWidth());
        lbMorphoType->setSizePolicy(sizePolicy2);
        lbMorphoType->setMinimumSize(QSize(200, 0));
        lbMorphoType->setMaximumSize(QSize(200, 16777215));

        hlMorphoType->addWidget(lbMorphoType);

        cbMorphoType = new QComboBox(gbMorphologicalAnalysis);
        cbMorphoType->setObjectName(QString::fromUtf8("cbMorphoType"));
        cbMorphoType->setMinimumSize(QSize(75, 0));
        cbMorphoType->setMaximumSize(QSize(75, 16777215));

        hlMorphoType->addWidget(cbMorphoType);

        hsMorphoType = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlMorphoType->addItem(hsMorphoType);


        vlMorphologicalAnalysis->addLayout(hlMorphoType);

        hlMorphoAuto = new QHBoxLayout();
        hlMorphoAuto->setObjectName(QString::fromUtf8("hlMorphoAuto"));
        cbMorphoAuto = new QCheckBox(gbMorphologicalAnalysis);
        cbMorphoAuto->setObjectName(QString::fromUtf8("cbMorphoAuto"));

        hlMorphoAuto->addWidget(cbMorphoAuto);

        hsMorphoAuto = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlMorphoAuto->addItem(hsMorphoAuto);


        vlMorphologicalAnalysis->addLayout(hlMorphoAuto);


        verticalLayout_7->addLayout(vlMorphologicalAnalysis);


        verticalLayout->addWidget(gbMorphologicalAnalysis);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbOK = new QPushButton(DialogSettings);
        pbOK->setObjectName(QString::fromUtf8("pbOK"));
        sizePolicy.setHeightForWidth(pbOK->sizePolicy().hasHeightForWidth());
        pbOK->setSizePolicy(sizePolicy);
        pbOK->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setPointSize(11);
        pbOK->setFont(font);

        horizontalLayout->addWidget(pbOK);

        pbCancel = new QPushButton(DialogSettings);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        sizePolicy.setHeightForWidth(pbCancel->sizePolicy().hasHeightForWidth());
        pbCancel->setSizePolicy(sizePolicy);
        pbCancel->setMinimumSize(QSize(100, 0));
        pbCancel->setFont(font);

        horizontalLayout->addWidget(pbCancel);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(DialogSettings);

        QMetaObject::connectSlotsByName(DialogSettings);
    } // setupUi

    void retranslateUi(QDialog *DialogSettings)
    {
        DialogSettings->setWindowTitle(QCoreApplication::translate("DialogSettings", "Dialog", nullptr));
        gbGeneral->setTitle(QCoreApplication::translate("DialogSettings", "\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265", nullptr));
        lbImagePath->setText(QCoreApplication::translate("DialogSettings", "\320\237\321\203\321\202\321\214 \320\272 \320\277\320\260\320\277\320\272\320\265 \321\201 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217\320\274\320\270", nullptr));
        pbImagePath->setText(QCoreApplication::translate("DialogSettings", "...", nullptr));
        gbFlowControl->setTitle(QCoreApplication::translate("DialogSettings", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\321\202\320\276\320\272\320\276\320\274", nullptr));
        lbFlowInitial->setText(QCoreApplication::translate("DialogSettings", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\277\320\276\321\202\320\276\320\272\320\260", nullptr));
        lbFlowStep->setText(QCoreApplication::translate("DialogSettings", "\320\250\320\260\320\263 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        gbMorphologicalAnalysis->setTitle(QCoreApplication::translate("DialogSettings", "\320\234\320\276\321\200\321\204\320\276\320\273\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\260\320\275\320\260\320\273\320\270\320\267", nullptr));
        lbMorphoType->setText(QCoreApplication::translate("DialogSettings", "\320\242\320\270\320\277 \320\260\320\275\320\260\320\273\320\270\320\267\320\260", nullptr));
        cbMorphoType->setCurrentText(QString());
        cbMorphoAuto->setText(QCoreApplication::translate("DialogSettings", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270 \320\262\321\213\320\277\320\276\320\273\320\275\321\217\321\202\321\214 \320\274\320\276\321\200\321\204\320\276\320\273\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\260\320\275\320\260\320\273\320\270\320\267", nullptr));
        pbOK->setText(QCoreApplication::translate("DialogSettings", "OK", nullptr));
        pbCancel->setText(QCoreApplication::translate("DialogSettings", "\320\236\320\242\320\234\320\225\320\235\320\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSettings: public Ui_DialogSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSETTINGS_H
