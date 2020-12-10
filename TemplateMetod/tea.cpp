#include "tea.h"

Tea::Tea()
{

}


void Tea::brew(){

    cout << "Stepping the Tea" << endl;

}
void Tea::addCondiments(){

    cout << "Adding Lemon" << endl;

}

bool Tea::customerWantsCondiments(){
    QString answer = getUserInput();
     if (answer.toLower().startsWith("y")) {
        return true;
     }
     else {
        return false;
     }
}

QString Tea::getUserInput(){
    QString answer = nullptr;
    char *answer_char = new char [10];
    cout << "Would you like lemon with your tea (y/n)?" << endl;
    cin >> answer_char;
    answer = QString(answer_char);

    if (answer == nullptr) {
    return "no";
    }
    return answer;
}
