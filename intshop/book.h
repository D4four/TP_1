#ifndef BOOK_H
#define BOOK_H

#include <QDialog>

namespace Ui {
class Book;
}

class Book : public QDialog
{
    Q_OBJECT

public:
    explicit Book(QWidget *parent = nullptr);
    ~Book();
signals:
    void back();

private slots:

    void on_back_clicked();

    void on_createItem_clicked();

private:
    Ui::Book *ui;
};

#endif // BOOK_H
