#include<iostream>
using namespace std;

class Base
{
    public :
        int A , B;

        void Fun()            // FUnction Definition
        {
            cout<<"\n Base Fun.";
        }

        void Gun(int i)      // FUnction Definition
        {
            cout<<"\n Base Gun with 1 parameter.";
        }

        void Gun(int i , int j)   // Overloaded Function Definition
        {
            cout<<"\n Base Gun with 2 parameter.";
        }
};

class Derived : public Base
{
    public :
        int X , Y;

        void Sun()          // FUnction Definition
        {
            cout<<"\n Derived Sun";
        }

        void Fun(int i)          // FUnction Redefinition
        {
            cout<<"\n Derived Fun.";
        }

};

int main()
{
    Derived Dobj;
    
    Dobj.Base::Fun();
    Dobj.Gun(11);
    Dobj.Gun(11,21);
    Dobj.Sun();

    return 0;
}
