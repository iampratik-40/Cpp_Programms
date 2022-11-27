#include<iostream>
using namespace std;

class Base
{
    public :
        int A , B;

        Base()
        {
            cout<<"\n Inside Base Constructor ";
        }
        ~Base()
        {
            cout<<"\n Inside Base Destructor";
        }

        void Fun()
        {
            cout<<"\n Inside Base Fun";
        }
};

class Derived : public Base
{
    public :
        int X , Y;

        Derived()
        {
            cout<<"\n Inside Derived Constructor";
        }

        ~Derived()
        {
            cout<<"\n Inside Derived Destructor";
        }

        void Gun()
        {
            cout<<"\n Inside Gun of Derived";
        }
};

class DerivedX : public Derived
{
    public :
        int i , j;

        DerivedX()
        {
            cout<<"\n Inside DerivedX Costructor";
        }

        ~DerivedX()
        {
            cout<<"\n Inside DerivedX Destructor";
        }

        void Sun()
        {
            cout<<"\n Inside DerivedX Sun";
        }
};

int main()
{
    cout<<"\n Size of Base : "<<sizeof(Base);
    cout<<"\n Size of Derived : "<<sizeof(Derived);
    cout<<"\n Size of DerivedX : "<<sizeof(DerivedX);

    DerivedX dObj;

    dObj.Fun();
    dObj.Gun();
    dObj.Sun();
     
    return 0;
}