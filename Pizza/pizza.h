#ifndef PIZZA_H
#define PIZZA_H
#include <QString>
#include <QList>
#include "iostream"
using namespace std;

class Pizza
{
protected:
    QString name;
    QString dough;
    QString sauce;
    QList <QString> *toppings;
public:
    Pizza();
    virtual ~Pizza();
    QString getName();
    void prepare();
    void bake();
    void cut();
    void box();
    virtual QString toString();

};

#endif // PIZZA_H
