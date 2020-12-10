#ifndef MOCHA_H
#define MOCHA_H

#include "condimentdecorator.h"

class Mocha : public CondimentDecorator {
public:
    Mocha(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif // MOCHA_H
