#include "turkeyadapter.h"

TurkeyAdapter::TurkeyAdapter(Turkey *t)
{
    this -> turkey = t;

}
void TurkeyAdapter::quack()
{
    turkey ->gobble();
}
void TurkeyAdapter::fly()
{
    for (int i=0; i < 5; i++){
    turkey ->fly();
    }
}
