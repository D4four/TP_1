#include "book.h"
#include "ui_book.h"
#include"BookC.h"
#include "includes.h"



Book::Book(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Book)
{
    ui->setupUi(this);
}

Book::~Book()
{
    delete ui;
}

void Book::on_createItem_clicked()
{
    string name = ui->name->text().toStdString();
    string author = ui->author->text().toStdString();
    int yearPubl = ui->yearB->text().toInt();
    int pages = ui->pages->text().toInt();
    int price = ui->price->text().toInt();
    string annotation = ui->annot->text().toStdString();
    string genre = ui->genre->text().toStdString();

    BookC test;

    test.init(name, author, yearPubl, pages, price, annotation, genre);
    test.write();

    ui->name->setText(" ");
    ui->author->setText(" ");
    ui->yearB->setText(" ");
    ui->pages->setText(" ");
    ui->price->setText(" ");
    ui->annot->setText(" ");
    ui->genre->setText(" ");

    ofstream l("logi.txt", ios::app);
    ifstream p((("now.txt"))); // окрываем файл для чтения
    string linen;
    getline(p, linen);

    l << QDate::currentDate().toString().toStdString() << " "
      << QTime::currentTime().toString().toStdString() << " "
      << linen << " create book " << name << endl;

    p.close();
    l.close();

    this->close();      // Закрываем окно
    emit back();

}


void Book::on_back_clicked()
{
    this->close();      // Закрываем окно
    emit back();
}

