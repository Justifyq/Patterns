#ifndef MILK_H
#define MILK_H

#include "beverage.h"
#include "condimentdecorator.h"

class Milk : public CondimentDecorator {
public:
    Milk(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif // MILK_H
