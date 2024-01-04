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
}

DialogAbout::~DialogAbout()
{
    delete ui;
}

void DialogAbout::on_pbOK_clicked()
{
    close();
}

