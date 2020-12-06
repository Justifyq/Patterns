#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "pizza.h"
#include "pizzastore.h"
#include "cheesepizza.h"
#include "cheeseburger.h"
#include "carbonara.h"

class SimplePizzaFactory : public PizzaStore
{
public:
    SimplePizzaFactory();
    Pizza* createPizza(QString type);

};

#endif // SIMPLEPIZZAFACTORY_H
