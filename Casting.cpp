#include<iostream>
using namespace std;

class Base 
{
    public : 
        int A , B;

};

class Derived : public Base
{
    public :
        int X , Y;

};

int main()
{
    Base *Bp = NULL;
    Derived *Dp = NULL;

    Base Bobj;
    Derived Dobj;

    Bp = &Bobj;   // No Casting   Allowed
    Dp = &Dobj;   // No Casting   Allowed
    Bp = &Dobj;   // Upcasting    Allowed
    //Dp = &Bobj;   // Downcasting  NA

    return 0;
}