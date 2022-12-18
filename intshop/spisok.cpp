#include "spisok.h"
#include "ui_spisok.h"

Spisok::Spisok(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Spisok)
{
    ui->setupUi(this);
    //ui->verticalScrollBar->setRange(0, ui->labelMap->height());
    Keeper k;
    k.update();
    k.download();

    string line;
    ifstream f("Spisok.txt");

    while (getline(f, line))
    {
        ui->label->setText(ui->label->text() + QString::fromStdString(line) + "\n");
    }
    f.close();
}

Spisok::~Spisok()
{
    delete ui;
}

void Spisok::on_back_clicked()
{
    ui->label->setText("\n");
    Keeper k;
    k.update();
    k.download();

    string line;
    ifstream f("Spisok.txt");

    while (getline(f, line))
    {
        ui->label->setText(ui->label->text() + QString::fromStdString(line) + "\n");
    }
    f.close();

    //ui->label->setText("\n");
    this->close();
    emit back();
}

