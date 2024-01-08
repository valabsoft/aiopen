#include "dialogabout.h"
#include "qscreen.h"
#include "ui_dialogabout.h"

DialogAbout::DialogAbout(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogAbout)
{
    ui->setupUi(this);

    // Центрируем окно в пределах экрана
    move(screen()->geometry().center() - frameGeometry().center());
    setWindowTitle("AI Biology Processor 2.0 :: О программе");

    QFont fontNormal("GOST type B", 11, QFont::Normal);
    QFont fontNormalSmall("GOST type B", 9, QFont::Normal);
    QFont fontBold("GOST type B", 11, QFont::Bold);
    QFont fontBoldBig("GOST type B", 15, QFont::Bold);
    QFont fontButton("GOST type B", 13, QFont::Normal);

    ui->pbOK->setFont(fontButton);

    ui->lbTitle->setFont(fontBoldBig);
    ui->lbVersion->setFont(fontNormal);
    ui->lbAuthorsTitle->setFont(fontBold);
    ui->lbAuthors->setFont(fontNormal);
    ui->lbCopyright->setFont(fontNormalSmall);
}

DialogAbout::~DialogAbout()
{
    delete ui;
}

void DialogAbout::on_pbOK_clicked()
{
    close();
}

