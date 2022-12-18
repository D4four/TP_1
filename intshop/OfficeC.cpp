#include"includes.h"
#include"OfficeC.h"

void OfficeC::init(string type, string color, string use,int price) {
    this->type = type;
    this->color = color;
    this->use = use;
    this->price = price;

}
void OfficeC::write() {


    ofstream f("Office.txt", ios::app);
    f << this->type << '_' << this->use << '_' << this->color << endl;
    f.clear();
    f.seekp(0);
    f.close();

//    ofstream out("Book.txt");
//    out << this->name << endl;
//    out.close();

    ofstream fout((type + '_' + use + '_' + color + ".txt").c_str());

//    fout << "Тип канцелярии: \n\t" <<this->type << endl;
//    fout << "Цвет: \n\t" << this->color << endl;
//    fout << "Назначение: \n\t" << this->use << endl;
//    fout << "Цена: \n\t" << this->price << endl;

    fout  << this->type << endl;
    fout  << this->color << endl;
    fout  << this->use << endl;
    fout  << this->price << endl;


    fout.close();
}

