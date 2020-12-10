#ifndef TURKEYADAPTER_H
#define TURKEYADAPTER_H

#include "duck.h"
#include "turkey.h"

class TurkeyAdapter : public Duck
{
public:
    TurkeyAdapter(Turkey*);
    Turkey *turkey;
    void quack();
    void fly();
};

#endif // TURKEYADAPTER_H
