#include "dialogmorpho.h"
#include "qscreen.h"
#include "ui_dialogmorpho.h"

DialogMorpho::DialogMorpho(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogMorpho)
{
    ui->setupUi(this);

    // Фиксируем размер окна
    setFixedSize(QSize(800, 500));

    // Центрируем окно в пределах экрана
    move(screen()->geometry().center() - frameGeometry().center());
    setWindowTitle("AI Biology Processor 2.0 :: Морфологический анализ");

    QFont fontSmall("GOST type B", 11, QFont::Normal);
    ui->lvTable->setFont(fontSmall);

    ui->lvImage->setViewMode(QListView::IconMode);
    ui->lvImage->setIconSize(QSize(100, 100));
    ui->lvImage->setResizeMode(QListWidget::ResizeMode::Adjust);

    QDir path("D:\\SourceCode\\aiopen\\images\\");
    QStringList images = path.entryList(
        QStringList() << "*.png" << "*.PNG",
        QDir::Files);
    int ind;
    QString caption;
    foreach(QString filename, images) {

        ind = filename.lastIndexOf(".");
        caption = filename.left(ind);

        QListWidgetItem *item = new QListWidgetItem(
            QIcon(path.filePath(filename)),
            caption);
        ui->lvImage->addItem(item);
    }
}

DialogMorpho::~DialogMorpho()
{
    delete ui;
}

void DialogMorpho::on_lvImage_itemClicked(QListWidgetItem *item)
{
    QPixmap pixmap = item->icon().pixmap(QSize(210, 210));
    ui->lbImage->setPixmap(pixmap);


    // Заполнение списка
    QStringListModel *model = new QStringListModel(this);
    ui->lvTable->setModel(model);

    QStringList list;
    list << "Particle ID\t\t" + item->text();
    list << "Aspect Ratio\t\t0.66";
    list << "Diameter (ESD)\t21.63";
    list << "Edge Gradient\t255.00";
    list << "Length\t\t25.73";
    list << "Sigma Intensity\t70.98";
    list << "Width\t\t16.99";

    model->setStringList(list);
}

