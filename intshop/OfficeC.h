#ifndef OFFICEC_H
#define OFFICEC_H

#include"includes.h"
#include"BookStore.h"

class OfficeC :public BookStore {
public:
    string use;
    string type;
    string color;
    void init(string type, string color, string use,int price);
    void write() override;

};

#endif // OFFICEC_H
