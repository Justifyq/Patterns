#include <QCoreApplication>

#include "coffee.h"
#include "tea.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    cout << endl << "Tea:" << endl;
    Tea *tea = new Tea();
    tea->prepareRecipe();

    cout << endl <<  "Coffee:" << endl;
    Coffee *coffee = new Coffee();
    coffee->prepareRecipe();

    return a.exec();
}
