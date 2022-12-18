#ifndef VIEW_H
#define VIEW_H

#include <QDialog>

namespace Ui {
class View;
}

class View : public QDialog
{
    Q_OBJECT
signals:
    void back();

public:
    explicit View(QWidget *parent = nullptr);
    ~View();

private slots:
    void on_back_clicked();


    void on_categories_activated(int index);


    void on_item_activated(int index);

private:
    Ui::View *ui;
};

#endif // VIEW_H
