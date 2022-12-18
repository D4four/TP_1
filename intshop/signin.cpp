#include "signin.h"
#include "ui_signin.h"

SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
}

SignIn::~SignIn()
{
    delete ui;
}

void SignIn::on_signin_clicked()
{
    this->name = ui->name->text().toStdString();
    this->pass = ui->pass->text().toStdString();

//    string name = ui->name->text().toStdString();
//    string pass = ui->pass->text().toStdString();
    int flag = 0;
    string linen;
    string linep;
    ifstream n((("Names.txt"))); // окрываем файл для чтения
    ifstream p((("Passes.txt"))); // окрываем файл для чтения
    map <string, string> sign;
    if (n.is_open() && p.is_open())
    {

        while (getline(n, linen) && getline(p, linep))
        {
            sign[linen] = linep;

        }


    }

    n.close();
    p.close();

    map <string, string> :: iterator it = sign.begin();

    for (int i = 0; it != sign.end(); it++, i++) {  // выводим их
        if (it->first == this->name) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
         QMessageBox::warning(this, "Регистрация", "Пользователь с таким именем уже существует!");
         ui->name->setText(" ");
         ui->pass->setText(" ");
    } else {
        ofstream nn("Names.txt", ios::app);
        nn << this->name << "\n" << endl;
        nn.clear();
        nn.seekp(0);
        nn.close();

        ofstream pp("Passes.txt", ios::app);
        pp << this->pass << "\n" << endl;
        pp.clear();
        pp.seekp(0);
        pp.close();

        ui->name->setText(" ");
        ui->pass->setText(" ");

        this->close();
        emit back();
    }

}


void SignIn::on_back_clicked()
{
    this->close();
    emit back();
}

