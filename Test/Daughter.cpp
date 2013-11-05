#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

Daughter::Daughter()
{
    cout << "daughter constructor" << endl;
}

Daughter::~Daughter()
{
    cout << "daughter deconstructor" << endl;
}
