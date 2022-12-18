#ifndef KEEPER_H
#define KEEPER_H

#include "includes.h"
#include "list.h"
#include "BookC.h"
#include "StudBookC.h"
#include "OfficeC.h"
class Keeper {
public:
    List<BookC> b;
    List<StudBookC> s;
    List<OfficeC> o;
    void update();
    void download();
};

#endif // KEEPER_H
