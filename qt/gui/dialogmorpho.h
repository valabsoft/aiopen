#ifndef DIALOGMORPHO_H
#define DIALOGMORPHO_H

#include <QDialog>
#include <QDir>
#include <QListWidgetItem>
#include <QStringListModel>

namespace Ui {
class DialogMorpho;
}

class DialogMorpho : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMorpho(QWidget *parent = nullptr);
    ~DialogMorpho();

private slots:
    void on_lvImage_itemClicked(QListWidgetItem *item);

private:
    Ui::DialogMorpho *ui;
};

#endif // DIALOGMORPHO_H
