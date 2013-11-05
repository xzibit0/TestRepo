#include <iostream>
#include "Hannah.h"

using namespace std;

Hannah::Hannah(int num)
:   h(num)
{
    printMe();
}

void Hannah::printMe()
{
    cout << "h = \t\t" << h << endl;
    cout << "this->h = \t" << this->h << endl;
    cout << "(*this).h = \t" << (*this).h << endl;
}
