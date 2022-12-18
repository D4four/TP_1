#ifndef EDITOFFICE_H
#define EDITOFFICE_H

#include <QDialog>
#include "OfficeC.h"

namespace Ui {
class EditOffice;
}

class EditOffice : public QDialog
{
    Q_OBJECT

public:
    explicit EditOffice(QWidget *parent = nullptr);
    ~EditOffice();

signals:
    void back();

private slots:
    void on_editName_activated(int index);

    void on_create_clicked();

    void on_back_clicked();

    void on_del_clicked();

    void on_editName_highlighted(int index);

private:
    Ui::EditOffice *ui;

};

#endif // EDITOFFICE_H
