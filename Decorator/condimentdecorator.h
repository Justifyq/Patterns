#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "beverage.h"

class CondimentDecorator : public Beverage {
protected:
    Beverage *beverage;
public:
    CondimentDecorator(Beverage*);
};

#endif // CONDIMENTDECORATOR_H
