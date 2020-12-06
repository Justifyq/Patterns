#include "pizza.h"

Pizza::Pizza()
{
     toppings = new QList <QString>();
}
Pizza::~Pizza(){
    delete toppings;

}
QString Pizza ::getName(){
    return name;
}
void Pizza::prepare() {
    cout << "\tPreparing " << name.toStdString()<< endl;

}

void Pizza::bake() {
    cout << "\tBaking " << name.toStdString()<< endl;
}

void Pizza::cut() {
cout << "\tCutting " << name.toStdString()<< endl;
}

void Pizza::box() {
cout << "\tBoxing " << name.toStdString()<< endl;
}

QString Pizza::toString(){
    QString str = "----" + name + "----\n ";
    str.append(dough + "\n ");
    str.append(sauce + "\n ");
    for (int i = 0; i < toppings->size(); i++) {
       str.append(toppings->at(i) + "\n ");
    }
    return str;
}
