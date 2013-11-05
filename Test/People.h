#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>

using namespace std;

class People
{
    public:
        People(string n, Birthday b);
        void printInfo();
    private:
        string name;
        Birthday date;
};

#endif // PEOPLE_H
