#include "editstudbook.h"
#include "ui_editstudbook.h"
#include "includes.h"

EditStudBook::EditStudBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditStudBook)
{
    ui->setupUi(this);

    ui->editName->clear();
    ui->editName->addItem("...");
    string lin;
    ifstream inn("StudBook.txt", ios::in); // окрываем файл для чтения
    if (inn.is_open())
    {
        while (getline(inn, lin))
        {
            ui->editName->addItem(QString::fromStdString(lin));
        }

    }

    inn.close();

    ui->name->setDisabled(true);
    ui->auth->setDisabled(true);
    ui->yearPubl->setDisabled(true);
    ui->pages->setDisabled(true);
    ui->price->setDisabled(true);
    ui->yearStud->setDisabled(true);
    ui->studHome->setDisabled(true);

}

EditStudBook::~EditStudBook()
{
    delete ui;
}

void EditStudBook::on_editName_activated(int index)
{
    ui->name->setEnabled(true);
    ui->auth->setEnabled(true);
    ui->yearPubl->setEnabled(true);
    ui->pages->setEnabled(true);
    ui->price->setEnabled(true);
    ui->yearStud->setEnabled(true);
    ui->studHome->setEnabled(true);

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

         ui->name->setText(line[0]);
         ui->auth->setText(line[1]);
         ui->yearPubl->setText(line[2]);
         ui->pages->setText(line[3]);
         ui->price->setText(line[4]);
         ui->yearStud->setText(line[5]);
         ui->studHome->setText(line[6]);

    }

    in.close();
}


void EditStudBook::on_save_clicked()
{
    string nameRem = ui->editName->currentText().toStdString();
    string name = ui->name->text().toStdString();
    string author = ui->auth->text().toStdString();
    int yearPubl = ui->yearPubl->text().toInt();
    int pages = ui->pages->text().toInt();
    int price = ui->price->text().toInt();
    int yearEduc = ui->yearStud->text().toInt();
    string educ = ui->studHome->text().toStdString();
    remove((nameRem + ".txt").c_str());
    string line;
    vector <string> qline;
    ifstream in((("StudBook.txt"))); // окрываем файл для чтения
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
    ofstream f("StudBook.txt", ios_base::trunc);

    for (int j = 0; j < i; j++) {
        if (qline[j] != (nameRem)) {
            f << qline[j] << endl;
        }

    }

    f.close();

    StudBookC test;

    test.init(name, author, yearPubl, pages, price, educ, yearEduc);
    test.write();

    ui->name->setText(" ");
    ui->auth->setText(" ");
    ui->yearPubl->setText(" ");
    ui->pages->setText(" ");
    ui->price->setText(" ");
    ui->yearStud->setText(" ");
    ui->studHome->setText(" ");

    ofstream l("logi.txt", ios::app);
    ifstream p((("now.txt"))); // окрываем файл для чтения
    string linen;
    getline(p, linen);

    l << QDate::currentDate().toString().toStdString() << " "
      << QTime::currentTime().toString().toStdString() << " "
      << linen << " edit studbook " << nameRem << endl;

    p.close();
    l.close();

    ui->name->setDisabled(true);
    ui->auth->setDisabled(true);
    ui->yearPubl->setDisabled(true);
    ui->pages->setDisabled(true);
    ui->price->setDisabled(true);
    ui->yearStud->setDisabled(true);
    ui->studHome->setDisabled(true);

    ui->editName->clear();
    ui->editName->addItem("...");

    this->close();      // Закрываем окно
    emit back();
}


void EditStudBook::on_back_clicked()
{
    ui->name->setText(" ");
    ui->auth->setText(" ");
    ui->yearPubl->setText(" ");
    ui->pages->setText(" ");
    ui->price->setText(" ");
    ui->yearStud->setText(" ");
    ui->studHome->setText(" ");

    ui->name->setDisabled(true);
    ui->auth->setDisabled(true);
    ui->yearPubl->setDisabled(true);
    ui->pages->setDisabled(true);
    ui->price->setDisabled(true);
    ui->yearStud->setDisabled(true);
    ui->studHome->setDisabled(true);

    ui->editName->clear();
    ui->editName->addItem("...");

    this->close();      // Закрываем окно
    emit back();
}


void EditStudBook::on_pushButton_clicked()
{
    string nameRem = ui->editName->currentText().toStdString();

    remove((nameRem + ".txt").c_str());
    QString line[7];
    string qline[7];
    ifstream in((("StudBook.txt"))); // окрываем файл для чтения
          int i = 0;
    if (in.is_open())
    {

        while (getline(in, qline[i]))
        {

          line[i] = QString::fromStdString(qline[i]);
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

    ui->name->setText(" ");
    ui->auth->setText(" ");
    ui->yearPubl->setText(" ");
    ui->pages->setText(" ");
    ui->price->setText(" ");
    ui->yearStud->setText(" ");
    ui->studHome->setText(" ");

    ofstream l("logi.txt", ios::app);
    ifstream p((("now.txt"))); // окрываем файл для чтения
    string linen;
    getline(p, linen);

    l << QDate::currentDate().toString().toStdString() << " "
      << QTime::currentTime().toString().toStdString() << " "
      << linen << " del studbook " << nameRem << endl;

    p.close();
    l.close();
    ui->editName->clear();
    ui->editName->addItem("...");

    this->close();      // Закрываем окно
    emit back();

    f.close();
}


void EditStudBook::on_editName_highlighted(int index)
{
    if (index == 0) {
        ui->editName->clear();
        ui->editName->addItem("...");
        string lin;
        ifstream inn("StudBook.txt", ios::in); // окрываем файл для чтения
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

