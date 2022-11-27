#include<iostream>
using namespace std;

class Base 
{
    public : 
        int A , B;

        void Fun()
        {
            cout<<"\n Base Fun ";
        }

        virtual void Gun()
        {
            cout<<"\n Base Gun";
        }

        virtual void Sun()
        {
            cout<<"\n Base Sun";
        }

        virtual void Run()
        {
            cout<<"\n Base Run ";
        }

};

class Derived : public Base
{
    public :
        int X , Y;

        void Gun()
        {
            cout<<"\n Derived Gun";
        }

        virtual void Run()
        {
            cout<<"\n Derived Run";
        }

        virtual void Mun()
        {
            cout<<"\n Derived Mun";
        }
};

int main()
{
    //cout<<"\n Size of Base Class :  "<<sizeof(Base);
    //cout<<"\n Size of Derived Class :  "<<sizeof(Derived);
/*
    Base *Bp = NULL;
    
    Derived Dobj;

    Bp = &Dobj;

    Bp -> Fun();
    Bp -> Gun();
    Bp -> Sun();
*/

    Base *Bp = NULL;

    Derived DObj ;

    Bp = &DObj;

    Bp -> Fun();    //Base Fun
    Bp -> Gun();    //Derived Gun
    Bp -> Sun();    //Base Sun
    Bp -> Run();    //Derived Run
    //Bp -> Mun();    //Error

    return 0;
}