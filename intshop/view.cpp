#include "view.h"
#include "ui_view.h"
#include "includes.h"

int whatCat = 0;

View::View(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);

}

View::~View()
{
    delete ui;
}

void View::on_back_clicked()
{
    ui->categories->setCurrentIndex(0);
    ui->item->clear();
    ui->item->addItem("...");
    ui->label->setText("\n");
    this->close();      // Закрываем окно
    emit back();
}



void View::on_categories_activated(int index)
{
//    int item = ui->categories->currentIndex();

    switch(index) {

        case 1: {
            whatCat = 1;

            ui->item->clear();
            ui->item->addItem("...");
            string line;
            ifstream in("Book.txt", ios::in); // окрываем файл для чтения
            if (in.is_open())
            {
                while (getline(in, line))
                {
                    ui->item->addItem(QString::fromStdString(line));
                }

            }

            in.close();
            break;
        }
        case 2: {
            whatCat = 2;
            ui->item->clear();
            ui->item->addItem("...");
            string line;
            ifstream in("StudBook.txt", ios::in); // окрываем файл для чтения
            if (in.is_open())
            {
                while (getline(in, line))
                {
                    ui->item->addItem(QString::fromStdString(line));
                }

            }

            in.close();
            break;
        }
        case 3: {
            whatCat = 3;
            ui->item->clear();
            ui->item->addItem("...");
            string line;
            ifstream in("Office.txt", ios::in); // окрываем файл для чтения
            if (in.is_open())
            {
                while (getline(in, line))
                {
                    ui->item->addItem(QString::fromStdString(line));
                }

            }

            in.close();
            break;
        }
    }
}



void View::on_item_activated(int index)
{
    string name = ui->item->currentText().toStdString();
//    QString test;
//    ui->label->setText(test.setNum(name.size()));
    ui->label->setText("\n");
//    QString line;
//    string qline;
    ifstream in(((name + ".txt").c_str())); // окрываем файл для чтения
    if (in.is_open())
    {
        if (whatCat == 1) {
            QString line[7];
            string qline[7];
            for (int i = 0; i < 7; i++)
            {
              getline(in, qline[i]);
              line[i] = QString::fromStdString(qline[i]);
//              ui->label->setText(ui->label->text() + line[i]);
            }

            ui->label->setText(ui->label->text() + "Название: \n\t");
            ui->label->setText(ui->label->text() + line[0] + "\n");
            ui->label->setText(ui->label->text() + "Автор: \n\t");
            ui->label->setText(ui->label->text() + line[1] + "\n");
            ui->label->setText(ui->label->text() + "Год публикации: \n\t");
            ui->label->setText(ui->label->text() + line[2] + "\n");
            ui->label->setText(ui->label->text() + "Страницы: \n\t");
            ui->label->setText(ui->label->text() + line[3] + "\n");
            ui->label->setText(ui->label->text() + "Цена: \n\t");
            ui->label->setText(ui->label->text() + line[4] + "\n");
            ui->label->setText(ui->label->text() + "Анотация: \n\t");
            ui->label->setText(ui->label->text() + line[5] + "\n");
            ui->label->setText(ui->label->text() + "Жанр: \n\t");
            ui->label->setText(ui->label->text() + line[6] + "\n");

        }

        if (whatCat == 2) {
            QString line[7];
            string qline[7];
            for (int i = 0; i < 7; i++)
            {
              getline(in, qline[i]);
              line[i] = QString::fromStdString(qline[i]);
//              ui->label->setText(ui->label->text() + line[i]);
            }

            ui->label->setText(ui->label->text() + "Название: \n\t");
            ui->label->setText(ui->label->text() + line[0] + "\n");
            ui->label->setText(ui->label->text() + "Автор: \n\t");
            ui->label->setText(ui->label->text() + line[1] + "\n");
            ui->label->setText(ui->label->text() + "Год публикации: \n\t");
            ui->label->setText(ui->label->text() + line[2] + "\n");
            ui->label->setText(ui->label->text() + "Страницы: \n\t");
            ui->label->setText(ui->label->text() + line[3] + "\n");
            ui->label->setText(ui->label->text() + "Цена: \n\t");
            ui->label->setText(ui->label->text() + line[4] + "\n");
            ui->label->setText(ui->label->text() + "Обр. организация: \n\t");
            ui->label->setText(ui->label->text() + line[5] + "\n");
            ui->label->setText(ui->label->text() + "Время обучения: \n\t");
            ui->label->setText(ui->label->text() + line[6] + "\n");

        }

        if (whatCat == 3) {
            QString line[4];
            string qline[4];
            for (int i = 0; i < 4; i++)
            {
              getline(in, qline[i]);
              line[i] = QString::fromStdString(qline[i]);
//              ui->label->setText(ui->label->text() + line[i]);
            }

            ui->label->setText(ui->label->text() + "Тип канцелярии: \n\t");
            ui->label->setText(ui->label->text() + line[0] + "\n");
            ui->label->setText(ui->label->text() + "Цвет: \n\t");
            ui->label->setText(ui->label->text() + line[1] + "\n");
            ui->label->setText(ui->label->text() + "Назначение: \n\t");
            ui->label->setText(ui->label->text() + line[2] + "\n");
            ui->label->setText(ui->label->text() + "Цена: \n\t");
            ui->label->setText(ui->label->text() + line[3] + "\n");

        }


    }
    whatCat = 0;

    in.close();

}

