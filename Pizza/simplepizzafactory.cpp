#include "simplepizzafactory.h"

SimplePizzaFactory::SimplePizzaFactory()
{

}
Pizza* SimplePizzaFactory::createPizza(QString type) {
    Pizza *pizza = nullptr;
   if (type == "CheesePizza") {
        pizza = new CheesePizza();

   }else if (type == "Cheeseburger") {
       pizza = new Cheeseburger();
   }else if (type == "Carbonara") {
       pizza = new Carbonara();
   }


    return pizza;
}
