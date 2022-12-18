#ifndef OFFICE_H
#define OFFICE_H

#include <QDialog>

namespace Ui {
class Office;
}

class Office : public QDialog
{
    Q_OBJECT

public:
    explicit Office(QWidget *parent = nullptr);
    ~Office();
signals:
    void back();

private slots:
    void on_back_clicked();

    void on_createItem_clicked();

private:
    Ui::Office *ui;
};

#endif // OFFICE_H
