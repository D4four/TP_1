#ifndef EDITSTUDBOOK_H
#define EDITSTUDBOOK_H

#include <QDialog>
#include "StudBookC.h"

namespace Ui {
class EditStudBook;
}

class EditStudBook : public QDialog
{
    Q_OBJECT

public:
    explicit EditStudBook(QWidget *parent = nullptr);
    ~EditStudBook();

signals:
    void back();

private slots:
    void on_editName_activated(int index);

    void on_save_clicked();

    void on_back_clicked();

    void on_pushButton_clicked();

    void on_editName_highlighted(int index);

private:
    Ui::EditStudBook *ui;

};

#endif // EDITSTUDBOOK_H
