#ifndef LOGI_H
#define LOGI_H

#include <QDialog>
#include "keeper.h"

namespace Ui {
class Logi;
}

class Logi : public QDialog
{
    Q_OBJECT

public:
    explicit Logi(QWidget *parent = nullptr);
    ~Logi();

signals:
    void back();

private slots:
    void on_back_clicked();

private:
    Ui::Logi *ui;

};

#endif // LOGI_H
