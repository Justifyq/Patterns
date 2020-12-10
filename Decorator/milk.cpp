#include "milk.h"

Milk::Milk(Beverage *b) : CondimentDecorator (b) {

}

double Milk::cost() {
    return 15.0 + beverage->cost();
}

QString Milk::getDescription() {
    return beverage->getDescription() + ", Milk";
}
