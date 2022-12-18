#ifndef STUDBOOKC_H
#define STUDBOOKC_H

#include"includes.h"
#include"BookStore.h"

class StudBookC :public BookStore {
public:
    string educ;
    int yearEduc;
    void init(string name, string author, int yearPubl, int pages, int price, string educ, int yaerEduc);
    void write() override;
};



#endif // STUDBOOKC_H
