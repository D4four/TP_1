#include "editbook.h"
#include "ui_editbook.h"
#include "includes.h"

EditBook::EditBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditBook)
{

    ui->setupUi(this);

    ui->nameEdit->clear();
    ui->nameEdit->addItem("...");
    string lin;
    ifstream inn("Book.txt", ios::in); // окрываем файл для чтения
    if (inn.is_open())
    {
        while (getline(inn, lin))
        {
            ui->nameEdit->addItem(QString::fromStdString(lin));
        }

    }

    inn.close();

    ui->name->setDisabled(true);
    ui->author->setDisabled(true);
    ui->yearB->setDisabled(true);
    ui->pages->setDisabled(true);
    ui->price->setDisabled(true);
    ui->annot->setDisabled(true);
    ui->genre->setDisabled(true);

}

EditBook::~EditBook()
{

    delete ui;
}

void EditBook::on_back_clicked()
{
    ui->name->setText(" ");
    ui->author->setText(" ");
    ui->yearB->setText(" ");
    ui->pages->setText(" ");
    ui->price->setText(" ");
    ui->annot->setText(" ");
    ui->genre->setText(" ");

    ui->name->setDisabled(true);
    ui->author->setDisabled(true);
    ui->yearB->setDisabled(true);
    ui->pages->setDisabled(true);
    ui->price->setDisabled(true);
    ui->annot->setDisabled(true);
    ui->genre->setDisabled(true);

    ui->nameEdit->clear();
    ui->nameEdit->addItem("...");

    this->close();      // Закрываем окно
    emit back();
}


void EditBook::on_save_clicked()
{
    string nameRem = ui->nameEdit->currentText().toStdString();
    string name = ui->name->text().toStdString();
    string author = ui->author->text().toStdString();
    int yearPubl = ui->yearB->text().toInt();
    int pages = ui->pages->text().toInt();
    int price = ui->price->text().toInt();
    string annotation = ui->annot->text().toStdString();
    string genre = ui->genre->text().toStdString();
    remove((nameRem + ".txt").c_str());
    string line;
    vector <string> qline;
    ifstream in((("Book.txt"))); // окрываем файл для чтения
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
    ofstream f("Book.txt", ios_base::trunc);

    for (int j = 0; j < i; j++) {
        if (qline[j] != (nameRem)) {
            f << qline[j] << endl;
        }

    }

    f.close();

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
      << linen << " edit book " << nameRem << endl;

    p.close();
    l.close();

    ui->nameEdit->clear();
    ui->nameEdit->addItem("...");

    ui->name->setDisabled(true);
    ui->author->setDisabled(true);
    ui->yearB->setDisabled(true);
    ui->pages->setDisabled(true);
    ui->price->setDisabled(true);
    ui->annot->setDisabled(true);
    ui->genre->setDisabled(true);

    this->close();      // Закрываем окно
    emit back();



}


void EditBook::on_nameEdit_activated(int index)
{

    ui->name->setEnabled(true);
    ui->author->setEnabled(true);
    ui->yearB->setEnabled(true);
    ui->pages->setEnabled(true);
    ui->price->setEnabled(true);
    ui->annot->setEnabled(true);
    ui->genre->setEnabled(true);

    string name = ui->nameEdit->currentText().toStdString();
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
         ui->author->setText(line[1]);
         ui->yearB->setText(line[2]);
         ui->pages->setText(line[3]);
         ui->price->setText(line[4]);
         ui->annot->setText(line[5]);
         ui->genre->setText(line[6]);

    }

    in.close();

}


void EditBook::on_del_clicked()
{
    string nameRem = ui->nameEdit->currentText().toStdString();

    remove((nameRem + ".txt").c_str());
    string line;
    vector <string> qline;
    ifstream in((("Book.txt"))); // окрываем файл для чтения
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
    ofstream f("Book.txt", ios_base::trunc);

    for (int j = 0; j < i; j++) {
        if (qline[j] != (nameRem)) {
            f << qline[j] << endl;
        }

    }

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
      << linen << " del book " << nameRem << endl;

    p.close();
    l.close();
    ui->nameEdit->clear();
    ui->nameEdit->addItem("...");
    this->close();      // Закрываем окно
    emit back();

    f.close();

    ui->name->setDisabled(true);
    ui->author->setDisabled(true);
    ui->yearB->setDisabled(true);
    ui->pages->setDisabled(true);
    ui->price->setDisabled(true);
    ui->annot->setDisabled(true);
    ui->genre->setDisabled(true);
}


void EditBook::on_nameEdit_highlighted(int index)
{
    if (index == 0) {
        ui->nameEdit->clear();
        ui->nameEdit->addItem("...");
        string lin;
        ifstream inn("Book.txt", ios::in); // окрываем файл для чтения
        if (inn.is_open())
        {
            while (getline(inn, lin))
            {
                ui->nameEdit->addItem(QString::fromStdString(lin));
            }

        }

        inn.close();
    }
}

