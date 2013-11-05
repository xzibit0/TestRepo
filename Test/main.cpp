#include <iostream>
#include <string>
using namespace std;


class Enemy
{
public:
    virtual void attack(int a){};
};

class Monster: public Enemy
{
public:
    void attack(int a)
    {
        cout << "Monster attack -" << a << endl;
    };
};

class Ninja: public Enemy
{
public:
    void attack(int a)
    {
        cout << "Ninja attack -" << a << endl;
    };
};

class Gorilla: public Enemy
{
public:
    void attack(int a)
    {
        cout << "Gorilla attack -" << a << endl;
    };
};

int main()
{
    Monster m;
    Ninja n;
    Gorilla g;

    Enemy *e1 = &m;
    Enemy *e2 = &n;
    Enemy *e3 = &g;

    //attack
    e1->attack(45);
    e2->attack(34);
    e3->attack(56);

    return 0;
}
