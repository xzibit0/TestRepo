#include "Birthday.h"
#include "People.h"
#include <iostream>

using namespace std;

People::People(string n, Birthday b)
:   name(n),
    date(b)
{
    //empty
}

void People::printInfo()
{
    cout << name << " was born on ";
    date.printDate();
}
