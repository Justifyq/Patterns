#ifndef COFFEE_H
#define COFFEE_H

#include "caffeinebeverage.h"
#include <QString>
#include <QTextStream>

class Coffee : public CaffeineBeverage
{
public:
    Coffee();
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
    QString getUserInput();
};

#endif // COFFEE_H
