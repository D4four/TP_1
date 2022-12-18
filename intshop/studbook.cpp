#include "studbook.h"
#include "ui_studbook.h"

#include"StudBookC.h"
#include "includes.h"

StudBook::StudBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudBook)
{
    ui->setupUi(this);
}

StudBook::~StudBook()
{
    delete ui;
}

void StudBook::on_back_clicked()
{
    this->close();      // Закрываем окно
    emit back();
}


void StudBook::on_createItem_clicked()
{
    string name = ui->name->text().toStdString();
    string author = ui->author->text().toStdString();
    int yearPubl = ui->yearPubl->text().toInt();
    int pages = ui->pages->text().toInt();
    int price = ui->price->text().toInt();
    string educ = ui->educ->text().toStdString();
    int yearEduc = ui->yearEduc->text().toInt();

    StudBookC test;

    test.init(name, author, yearPubl, pages, price, educ, yearEduc);
    test.write();

    ui->name->setText(" ");
    ui->author->setText(" ");
    ui->yearPubl->setText(" ");
    ui->pages->setText(" ");
    ui->price->setText(" ");
    ui->educ->setText(" ");
    ui->yearEduc->setText(" ");

    ofstream l("logi.txt", ios::app);
    ifstream p((("now.txt"))); // окрываем файл для чтения
    string linen;
    getline(p, linen);

    l << QDate::currentDate().toString().toStdString() << " "
      << QTime::currentTime().toString().toStdString() << " "
      << linen << " create studbook " << name << endl;

    p.close();
    l.close();

    this->close();      // Закрываем окно
    emit back();
}

