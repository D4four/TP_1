#include "logi.h"
#include "ui_logi.h"


Logi::Logi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Logi)
{
    ui->setupUi(this);

    string line;
    ifstream f("Logi.txt");

    while (getline(f, line))
    {
        ui->label->setText(ui->label->text() + QString::fromStdString(line) + "\n");
    }
    f.close();
}

Logi::~Logi()
{
    delete ui;
}

void Logi::on_back_clicked()
{
    string line;
    ifstream f("Logi.txt");
    ui->label->setText("\n");
    while (getline(f, line))
    {
        ui->label->setText(ui->label->text() + QString::fromStdString(line) + "\n");
    }
    f.close();

    this->close();
    emit back();
}

