#ifndef TEA_H
#define TEA_H

#include "caffeinebeverage.h"
#include <QString>

class Tea : public CaffeineBeverage
{
public:
    Tea();
    void brew();
    void addCondiments();
    QString getUserInput();
    virtual bool customerWantsCondiments();
};

#endif // TEA_H
