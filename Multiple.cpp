#include<iostream>
using namespace std;

class Base1     //4(size)
{
   public :
        int A;

        Base1()
        {
            cout<<"\n Base1 Constructor";
        }
        
        ~Base1()
        {
            cout<<"\n Base1 Destructor";
        }

        void Fun()
        {
            cout<<"\n Inside Fun Base1";
        }
};

class Base2     //12(size)
{
    public :
        int I , J , K;

        Base2()
        {
            cout<<"\n Base2 Constructor";
        }
        ~Base2()
        {
            cout<<"\n Base2 Destructor";
        }

        void Gun()
        {
            cout<<"\n Inside Gun Base2";
        }

};

class Derived : public Base2 , public Base1    //24(size)
{
    public : 
        int X , Y;

        Derived()
        {
            cout<<"\n Derived Constructor";
        }
        ~Derived()
        {
            cout<<"\n Derived Destructor";
        }

        void Sun()
        {
            cout<<"\n Inside Sun Derived";
        }
};

int main()
{
    Derived dObj;

    dObj.Fun();  //Base1
    dObj.Gun();  //Base2
    dObj.Sun();  //Derived

    return 0;
}
