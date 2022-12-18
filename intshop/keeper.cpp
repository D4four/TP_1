#include "keeper.h"

void Keeper::update() {

    string line;
    vector <string> knigi;

    ifstream f("Book.txt");

    while (getline(f, line))
    {
        knigi.push_back(line);
                cout << "Hello";
    }

    for (int i = 0; i < knigi.size(); i++) {

        string qline[7];
        ifstream in((knigi[i] + ".txt").c_str()); // окрываем файл для чтения
        int j = 0;
        if (in.is_open())
        {

            for (int l = 0; l < 7; l++)
            {
              getline(in, qline[l]);

            }
            QString temp2 = QString::fromStdString(qline[2]);
            int t2 = temp2.toInt();
            QString temp3 = QString::fromStdString(qline[3]);
            int t3 = temp3.toInt();
            QString temp4 = QString::fromStdString(qline[4]);
            int t4 = temp4.toInt();

            BookC test;

            test.init(qline[0], qline[1], t2, t3, t4, qline[5], qline[6]);

            this->b.push_back(test);

        }
        in.clear();
        in.seekg(0);
        in.close();
    }
    f.close();

    vector <string> ychebniki;

    ifstream ff("StudBook.txt");

    while (getline(ff, line))
    {
        ychebniki.push_back(line);
    }

    for (int i = 0; i < ychebniki.size(); i++) {

        string qline[7];
        ifstream in((ychebniki[i] + ".txt").c_str()); // окрываем файл для чтения
        int j = 0;
        if (in.is_open())
        {

            for (int l = 0; l < 7; l++)
            {
              getline(in, qline[l]);

            }
            QString temp2 = QString::fromStdString(qline[2]);
            int t2 = temp2.toInt();
            QString temp3 = QString::fromStdString(qline[3]);
            int t3 = temp3.toInt();
            QString temp4 = QString::fromStdString(qline[4]);
            int t4 = temp4.toInt();
            QString temp6 = QString::fromStdString(qline[6]);
            int t6 = temp4.toInt();

            StudBookC test;

            test.init(qline[0], qline[1], t2, t3, t4, qline[5], t6);

            this->s.push_back(test);

        }
        in.clear();
        in.seekg(0);
        in.close();
    }

    ff.close();

    vector <string> off;

    ifstream fff("Office.txt");

    while (getline(fff, line))
    {
        off.push_back(line);
    }

    for (int i = 0; i < off.size(); i++) {

        string qline[4];
        ifstream in((off[i] + ".txt").c_str()); // окрываем файл для чтения
        int j = 0;
        if (in.is_open())
        {

            for (int l = 0; l < 4; l++)
            {
              getline(in, qline[l]);

            }

            QString temp3 = QString::fromStdString(qline[3]);
            int t3 = temp3.toInt();


            OfficeC test;

            test.init(qline[0], qline[1], qline[2], t3);

            this->o.push_back(test);

        }
        in.clear();
        in.seekg(0);
        in.close();
    }

    fff.close();
}

void Keeper::download () {
    ofstream down("Spisok.txt");
    down << "Книги \n\t" << endl;
    for (int i = 0; i < b.GetSize(); i++) {

        down << "Название: \n\t" << this->b[i].name << endl;
        down << "Автор: \n\t" << this->b[i].author << endl;
        down << "Год публикации: \n\t" << this->b[i].yearPubl << endl;
        down << "Страницы: \n\t" << this->b[i].pages << endl;
        down << "Цена: \n\t" << this->b[i].price << endl;
        down << "Анотация: \n\t" << this->b[i].annotation << endl;
        down << "Жанр: \n\t" << this->b[i].genre << endl;
    }
    down << "Учебники \n\t" << endl;

    for (int i = 0; i < s.GetSize(); i++) {

            down << "Название: \n\t" <<this->s[i].name << endl;
            down << "Автор: \n\t" << this->s[i].author << endl;
            down << "Год публикации: \n\t" << this->s[i].yearPubl << endl;
            down << "Страницы: \n\t" << this->s[i].pages << endl;
            down << "Цена: \n\t" << this->s[i].price << endl;
            down << "Обр. организация: \n\t" << this->s[i].educ << endl;
            down << "Время обучения: \n\t" << this->s[i].yearEduc << endl;
    }
    down << "Канцелярия \n\t" << endl;

    for (int i = 0; i < o.GetSize(); i++) {

            down << "Тип канцелярии: \n\t" <<this->o[i].type << endl;
            down << "Цвет: \n\t" << this->o[i].color << endl;
            down << "Назначение: \n\t" << this->o[i].use << endl;
            down << "Цена: \n\t" << this->o[i].price << endl;
    }

    down.close();
}
