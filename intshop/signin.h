#ifndef SIGNIN_H
#define SIGNIN_H

#include <QDialog>
#include "includes.h"

namespace Ui {
class SignIn;
}

class SignIn : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn(QWidget *parent = nullptr);
    ~SignIn();

signals:
    void back();

private slots:
    void on_signin_clicked();

    void on_back_clicked();

private:
    Ui::SignIn *ui;
    string name;
    string pass;
};

#endif // SIGNIN_H
