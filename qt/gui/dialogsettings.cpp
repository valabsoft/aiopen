#include "dialogsettings.h"
#include "qscreen.h"
#include "ui_dialogsettings.h"

#include <filesystem>
namespace fs = std::filesystem;

DialogSettings::DialogSettings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogSettings)
{
    ui->setupUi(this);

    // Фиксируем размер окна
    setFixedSize(QSize(500, 350));

    // Центрируем окно в пределах экрана
    move(screen()->geometry().center() - frameGeometry().center());
    setWindowTitle("AI Biology Processor 2.0 :: Настройки");

    QFont fontNormal("GOST type B", 11, QFont::Normal);
    QFont fontBold("GOST type B", 11, QFont::Bold);
    QFont fontButton("GOST type B", 13, QFont::Normal);

    ui->gbGeneral->setFont(fontBold);
    ui->gbFlowControl->setFont(fontBold);
    ui->gbMorphologicalAnalysis->setFont(fontBold);

    ui->leImagePath->setFont(fontNormal);
    ui->lbImagePath->setFont(fontNormal);
    ui->lbFlowInitial->setFont(fontNormal);
    ui->leFlowInitial->setFont(fontNormal);
    ui->lbFlowStep->setFont(fontNormal);
    ui->leFlowStep->setFont(fontNormal);
    ui->lbMorphoType->setFont(fontNormal);
    ui->cbMorphoType->setFont(fontNormal);
    ui->cbMorphoAuto->setFont(fontNormal);

    ui->pbOK->setFont(fontButton);
    ui->pbCancel->setFont(fontButton);

    ui->cbMorphoType->insertItem(0, "ESD");

    fs::path pathToSettings = fs::current_path() / "settings.ini";
    QSettings settings (QString::fromStdString(pathToSettings.u8string()), QSettings::IniFormat);
    settings.beginGroup("Settings");

    ui->leImagePath->setText(settings.value("PATH_TO_IMAGES").toString());
    ui->leFlowInitial->setText(settings.value("FLOW_INIT").toString());
    ui->leFlowStep->setText(settings.value("FLOW_STEP").toString());

    if (settings.value("MORPHO_AUTO").toBool())
        ui->cbMorphoAuto->setCheckState(Qt::CheckState::Checked);
    else
        ui->cbMorphoAuto->setCheckState(Qt::CheckState::Unchecked);
}

DialogSettings::~DialogSettings()
{
    delete ui;
}

void DialogSettings::on_pbOK_clicked()
{
    fs::path pathToSettings = fs::current_path() / "settings.ini";
    QSettings settings (QString::fromStdString(pathToSettings.u8string()), QSettings::IniFormat);
    settings.beginGroup("Settings");

    settings.setValue("PATH_TO_IMAGES", ui->leImagePath->text());
    settings.setValue("FLOW_INIT", ui->leFlowInitial->text());
    settings.setValue("FLOW_STEP", ui->leFlowStep->text());
    settings.setValue("MORPHO_TYPE", ui->cbMorphoType->currentIndex());
    settings.setValue("MORPHO_AUTO", ui->cbMorphoAuto->isChecked());

    settings.sync();

    close();
}


void DialogSettings::on_pbCancel_clicked()
{
    close();
}


void DialogSettings::on_pbImagePath_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Путь к папке с изображениями"),
                                                    QDir::currentPath(),
                                                    QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    ui->leImagePath->setText(dir);
}

