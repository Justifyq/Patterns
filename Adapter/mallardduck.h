#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"

class MallardDuck : public Duck
{
public:
    MallardDuck();
    virtual void quack();
    virtual void fly();
};

#endif // MALLARDDUCK_H
