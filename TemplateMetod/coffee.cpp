#include "coffee.h"

Coffee::Coffee()
{

}


void Coffee:: brew(){

    cout << "Dripping Coffee through filter" << endl;


}
void Coffee:: addCondiments(){

    cout << "Adding shugar and milk" << endl;
}

bool Coffee::customerWantsCondiments(){

    QString answer = getUserInput();
    if (answer.toLower().startsWith("y")){
        return true;
    }
    else {
        return false;
    }
}
QString Coffee::getUserInput(){
    QString answer = nullptr;
    char *answer_char = new char [10];
    cout << "Would you like milk and sugar with your coffee (y/n)?" << endl;
    cin >> answer_char;
    answer = QString(answer_char);

    if (answer == nullptr) {
    return "no";
    }
    return answer;
}

