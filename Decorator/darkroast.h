#ifndef DARKROAST_H
#define DARKROAST_H

#include "beverage.h"

class DarkRoast : public Beverage {
public:
    DarkRoast();
    virtual double cost();
};

#endif // DARKROAST_H
