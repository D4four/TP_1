#ifndef SPISOK_H
#define SPISOK_H

#include <QDialog>
#include "keeper.h"

namespace Ui {
class Spisok;
}

class Spisok : public QDialog
{
    Q_OBJECT

public:
    explicit Spisok(QWidget *parent = nullptr);
    ~Spisok();

signals:
    void back();

private slots:
    void on_back_clicked();

private:
    Ui::Spisok *ui;
//    Keeper k;
};

#endif // SPISOK_H
