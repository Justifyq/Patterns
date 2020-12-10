#include "pancakehousemenu.h"

PancakeHouseMenu::PancakeHouseMenu()
{
    addItem("K&B’s Pancake Breakfast", "-- Pancakes with scrambled eggs, and toast", true, 2.99);
    addItem("Blueberry Pancakes, 3.49", " -- Pancakes made with fresh b", true, 2.99);
    addItem("Blueberry Pancakes, 3.49", " -- Pancakes made with fresh blueberriest", true, 3.49);
    addItem("Waffles, 3.59", " -- Waffles, with your choice of blueberries or strawberries", true, 3.59);
}
void PancakeHouseMenu::addItem(QString name, QString description, bool vegetarian, double price) {
    MenuItem *menuItem = new MenuItem(name, description, vegetarian, price);
    menuItems.append(menuItem);
}

QList<MenuItem*> PancakeHouseMenu::getMenuItems() {
    return menuItems;
}

Iterator* PancakeHouseMenu::createIterator() {
    return new PancakeHouseMenuIterator(menuItems);
}
