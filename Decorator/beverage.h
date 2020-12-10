#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <QString>

class Beverage {
protected:
    QString descrition;
public:
    Beverage();
    virtual QString getDescription();
    virtual double cost() = 0;
};

#endif // BEVERAGE_H
