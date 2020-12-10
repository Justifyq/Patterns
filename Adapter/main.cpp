#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "turkey.h"
#include "turkeyadapter.h"
#include "wildturkey.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MallardDuck *duck = new MallardDuck();
    WildTurkey *turkey = new WildTurkey();
    Duck *turkeyAdapter = new TurkeyAdapter(turkey);

    cout << "turkey:" << endl;
    turkey ->gobble();
    turkey ->fly();

    cout << endl << "duck:" << endl;
    duck ->quack();
    duck ->fly();

    cout << endl << "turkey adapter:" << endl;
    turkeyAdapter ->quack();
    turkeyAdapter ->fly();






    return a.exec();
}
