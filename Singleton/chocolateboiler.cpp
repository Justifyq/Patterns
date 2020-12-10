#include "chocolateboiler.h"

ChocolateBoiler* ChocolateBoiler::uniqueInstance = 0;

ChocolateBoiler::ChocolateBoiler()
{
    empty = true;
    boiled = false;
}

ChocolateBoiler* ChocolateBoiler::getInstance() {
    if (uniqueInstance == nullptr) {
        uniqueInstance = new ChocolateBoiler();
    }
    return uniqueInstance;
}

void ChocolateBoiler::fill() {
    if (isEmpty()) {
        empty = false;
        boiled = false;
        cout << "Add Chocolate" << endl;
    }
}

void ChocolateBoiler::drain() {
    if (!isEmpty() && isBoiled()) {
        cout << "add hot milkv" << endl;
        empty = true;
    }
}

void ChocolateBoiler::boil() {
    if (!isEmpty() && !isBoiled()) {
        cout << "bul bul bul bul" << endl;
        boiled = true;
    }
}

bool ChocolateBoiler::isEmpty() {
    return empty;
}

bool ChocolateBoiler::isBoiled() {
    return boiled;
}
