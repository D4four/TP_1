#ifndef CREATE_H
#define CREATE_H

#include <QDialog>
#include "book.h"
#include "studbook.h"
#include "office.h"

namespace Ui {
class Create;
}

class Create : public QDialog
{
    Q_OBJECT

signals:
    void back();

public:
    explicit Create(QWidget *parent = nullptr);
    ~Create();

private slots:

    void on_create_clicked();

    void on_back_clicked();

private:
    Ui::Create *ui;
    Book *bookWin;
    StudBook *StudBookWin;
    Office *OffBookWin;
};

#endif // CREATE_H
