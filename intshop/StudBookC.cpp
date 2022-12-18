#include"includes.h"
#include"StudBookC.h"

void StudBookC::init(string name, string author, int yearPubl, int pages, int price, string educ, int yearEduc) {
    this->name = name;
    this->author = author;
    this->yearPubl = yearPubl;
    this->pages = pages;
    this->price = price;
    this->educ = educ;
    this->yearEduc = yearEduc;
}

void StudBookC::write() {


    ofstream f("StudBook.txt", ios::app);
    f << this->name << endl;
    f.clear();
    f.seekp(0);
    f.close();

//    ofstream out("Book.txt");
//    out << this->name << endl;
//    out.close();

    ofstream fout((name + ".txt").c_str());

//    fout << "Название: \n\t" <<this->name << endl;
//    fout << "Автор: \n\t" << this->author << endl;
//    fout << "Год публикации: \n\t" << this->yearPubl << endl;
//    fout << "Страницы: \n\t" << this->pages << endl;
//    fout << "Цена: \n\t" << this->price << endl;
//    fout << "Обр. организация: \n\t" << this->educ << endl;
//    fout << "Время обучения: \n\t" << this->yearEduc << endl;

    fout  << this->name << endl;
    fout  << this->author << endl;
    fout  << this->yearPubl << endl;
    fout  << this->pages << endl;
    fout  << this->price << endl;
    fout  << this->educ << endl;
    fout  << this->yearEduc << endl;

    fout.close();
}

