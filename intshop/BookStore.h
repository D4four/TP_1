#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include "includes.h"

class BookStore {
public:
    string name;
    string author;
    int yearPubl;
    int pages;
    int price;
    virtual void write() = 0;

};
#endif // BOOKSTORE_H
