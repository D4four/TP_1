#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include "editbook.h"
#include "editstudbook.h"
#include "editoffice.h"

namespace Ui {
class Edit;
}

class Edit : public QDialog
{
    Q_OBJECT
signals:
    void back();

public:
    explicit Edit(QWidget *parent = nullptr);
    ~Edit();

private slots:
    void on_back_clicked();

    void on_editEl_activated(int index);

    void on_editB_clicked();

private:
    Ui::Edit *ui;
    EditBook *editBookWin;
    EditStudBook *editStudBookWin;
    EditOffice *editOfficeWin;
    int what;
};

#endif // EDIT_H
