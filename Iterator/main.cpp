#include <QCoreApplication>

#include "dinermenu.h"
#include "waitress.h"
#include "pancakehousemenu.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DinerMenu *dinerMenu = new DinerMenu();
    PancakeHouseMenu *pancakeHouseMenu = new PancakeHouseMenu();
    Waitress *waitress = new Waitress(dinerMenu, pancakeHouseMenu);
    waitress->printMenu();

    return a.exec();
}
