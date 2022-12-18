#include "editoffice.h"
#include "ui_editoffice.h"
#include "includes.h"

EditOffice::EditOffice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditOffice)
{
    ui->setupUi(this);

    ui->editName->clear();
    ui->editName->addItem("...");
    string lin;
    ifstream inn("Office.txt", ios::in); // окрываем файл для чтения
    if (inn.is_open())
    {
        while (getline(inn, lin))
        {
            ui->editName->addItem(QString::fromStdString(lin));
        }

    }

    inn.close();

    ui->type->setDisabled(true);
    ui->color->setDisabled(true);
    ui->use->setDisabled(true);
    ui->price->setDisabled(true);
}

EditOffice::~EditOffice()
{
    delete ui;
}

void EditOffice::on_editName_activated(int index)
{
    ui->type->setEnabled(true);
    ui->color->setEnabled(true);
    ui->use->setEnabled(true);
    ui->price->setEnabled(true);


    string name = ui->editName->currentText().toStdString();
    QString line[7];
    string qline[7];
    ifstream in(((name + ".txt").c_str())); // окрываем файл для чтения
    if (in.is_open())
    {

        for (int i = 0; i < 7; i++)
        {
          getline(in, qline[i]);
          line[i] = QString::fromStdString(qline[i]);
        }

         ui->type->setText(line[0]);
         ui->use->setText(line[1]);
         ui->color->setText(line[2]);
         ui->price->setText(line[3]);


    }

    in.close();
}


void EditOffice::on_create_clicked()
{
    string nameRem = ui->editName->currentText().toStdString();
    string type = ui->use->text().toStdString();
    string color = ui->color->text().toStdString();
    string use = ui->use->text().toStdString();
    int price = ui->price->text().toInt();

    remove((nameRem + ".txt").c_str());
    string line;
    vector <string> qline;
    ifstream in((("Office.txt"))); // окрываем файл для чтения
          int i = 0;
    if (in.is_open())
    {

        while (getline(in, line))
        {

          qline.push_back(line);
          i++;
        }

    }
    in.clear();
    in.seekg(0);
    in.close();
    ofstream f("Office.txt", ios_base::trunc);

    for (int j = 0; j < i; j++) {
        if (qline[j] != (nameRem)) {
            f << qline[j] << endl;
        }

    }

    f.close();

    OfficeC test;

    test.init(type, color, use,price);
    test.write();

    ui->type->setText(" ");
    ui->color->setText(" ");
    ui->use->setText(" ");
    ui->price->setText(" ");

    ofstream l("logi.txt", ios::app);
    ifstream p((("now.txt"))); // окрываем файл для чтения
    string linen;
    getline(p, linen);

    l << QDate::currentDate().toString().toStdString() << " "
      << QTime::currentTime().toString().toStdString() << " "
      << linen << " edit office " << nameRem << endl;

    p.close();
    l.close();

    ui->type->setDisabled(true);
    ui->color->setDisabled(true);
    ui->use->setDisabled(true);
    ui->price->setDisabled(true);

    ui->editName->clear();
    ui->editName->addItem("...");

    this->close();      // Закрываем окно
    emit back();

}


void EditOffice::on_back_clicked()
{
    ui->type->setText(" ");
    ui->color->setText(" ");
    ui->use->setText(" ");
    ui->price->setText(" ");

    ui->type->setDisabled(true);
    ui->color->setDisabled(true);
    ui->use->setDisabled(true);
    ui->price->setDisabled(true);

    ui->editName->clear();
    ui->editName->addItem("...");

    this->close();      // Закрываем окно
    emit back();
}


void EditOffice::on_del_clicked()
{
    string nameRem = ui->editName->currentText().toStdString();

    remove((nameRem + ".txt").c_str());
    string line;
    vector <string> qline;
    ifstream in((("Office.txt"))); // окрываем файл для чтения
          int i = 0;
    if (in.is_open())
    {

        while (getline(in, line))
        {

          qline.push_back(line);
          i++;
        }

    }
    in.clear();
    in.seekg(0);
    in.close();
    ofstream f("Office.txt", ios_base::trunc);

    for (int j = 0; j < i; j++) {
        if (qline[j] != (nameRem)) {
            f << qline[j] << endl;
        }

    }

    ui->type->setText(" ");
    ui->color->setText(" ");
    ui->use->setText(" ");
    ui->price->setText(" ");

    ofstream l("logi.txt", ios::app);
    ifstream p((("now.txt"))); // окрываем файл для чтения
    string linen;
    getline(p, linen);

    l << QDate::currentDate().toString().toStdString() << " "
      << QTime::currentTime().toString().toStdString() << " "
      << linen << " del office " << nameRem << endl;
    ui->editName->clear();
    ui->editName->addItem("...");

    p.close();
    l.close();

    this->close();      // Закрываем окно
    emit back();

    f.close();
}


void EditOffice::on_editName_highlighted(int index)
{
    if (index == 0) {
        ui->editName->clear();
        ui->editName->addItem("...");
        string lin;
        ifstream inn("Office.txt", ios::in); // окрываем файл для чтения
        if (inn.is_open())
        {
            while (getline(inn, lin))
            {
                ui->editName->addItem(QString::fromStdString(lin));
            }

        }

        inn.close();
    }
}

