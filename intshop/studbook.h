#ifndef STUDBOOK_H
#define STUDBOOK_H

#include <QDialog>

namespace Ui {
class StudBook;
}

class StudBook : public QDialog
{
    Q_OBJECT
signals:
    void back();

public:
    explicit StudBook(QWidget *parent = nullptr);
    ~StudBook();

private slots:
    void on_back_clicked();

    void on_createItem_clicked();

private:
    Ui::StudBook *ui;
};

#endif // STUDBOOK_H
