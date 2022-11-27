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

};

class Derived : public Base
{
    public :
        int X , Y;

        void Gun()
        {
            cout<<"\n Derived Gun";
        }

        void Run()
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

    Base *Bp = NULL;
    
    Derived Dobj;

    Bp = &Dobj;

    Bp -> Fun();
    Bp -> Gun();
    Bp -> Sun();

    return 0;
}