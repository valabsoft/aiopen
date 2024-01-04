#ifndef DIALOGABOUT_H
#define DIALOGABOUT_H

#include <QDialog>
#include <QMainWindow>

namespace Ui {
class DialogAbout;
}

class DialogAbout : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAbout(QWidget *parent = nullptr);
    ~DialogAbout();

private slots:
    void on_pbOK_clicked();

private:
    Ui::DialogAbout *ui;
};

#endif // DIALOGABOUT_H
