#include "office.h"
#include "ui_office.h"
#include"OfficeC.h"
#include "includes.h"

Office::Office(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Office)
{
    ui->setupUi(this);
}

Office::~Office()
{
    delete ui;
}

void Office::on_back_clicked()
{
    this->close();      // Закрываем окно
    emit back();
}


void Office::on_createItem_clicked()
{
    string type = ui->type->text().toStdString();
    string use = ui->use->text().toStdString();
    string color = ui->color->text().toStdString();
    int price = ui->price->text().toInt();

    OfficeC test;

    test.init(type, color, use, price);
    test.write();

    ui->type->setText(" ");
    ui->use->setText(" ");
    ui->color->setText(" ");
    ui->price->setText(" ");

    ofstream l("logi.txt", ios::app);
    ifstream p((("now.txt"))); // окрываем файл для чтения
    string linen;
    getline(p, linen);

    l << QDate::currentDate().toString().toStdString() << " "
      << QTime::currentTime().toString().toStdString() << " "
      << linen << " create office " << type << "_" << use << "_"<< color << endl;

    p.close();
    l.close();

    this->close();      // Закрываем окно
    emit back();
}

