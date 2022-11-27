#include<iostream>
using namespace std;

class Demo
{
    public : 
        int i;        // Instance Variable
        int j;         // Instance Variable
        static int k;   // Class variable
        static int l;   // Class variable

        Demo()         // Default Constructor
        {
            i = 0;
            j = 0;
        }

        Demo(int A , int B)   // Parametraised Constructor
        {
            i = A;
            j = B;
        }

        void fun()     // Instance Method
        {
            cout<<"\n Inside FUN ";
            cout<<"\n value of Int 1 : "<<i;
            cout<<"\n value of Int 2 : "<<j;
            cout<<"\n value of Static Int 3 : "<<k;
            cout<<"\n value of Static Int 4 : "<<l;

        }

        static void gun()   // Class Method
        {
            cout<<"\n Inside GUN ";
            //cout<<"\n value of Int 1 : "<<i;
            //cout<<"\n value of Int 2 : "<<j;
            cout<<"\n value of Static Int 3 : "<<k;
            cout<<"\n value of Static Int 4 : "<<l;


        }

};

int Demo :: k = 200;    // Static Variable
int Demo :: l = 400;    // Static Variable

int main()
{
    cout<<"Inside Main";
    cout<<"\n Value of K : "<<Demo::k;
    cout<<"\n Value of l : "<<Demo::l;

    Demo obj1(10,11);
    Demo obj2(20,21);

    obj1.fun();
    obj1.gun();

    //cout<<sizeof(obj1);
    //cout<<"\n"<<sizeof(obj1);

    cout<<"\n Inside Main ";

    cout<<"\n Value of i in obj 1 : "<<obj1.i;
    cout<<"\n Value of i in obj 2 : "<<obj2.i;

    cout<<"\n Value of j in obj 1 : "<<obj1.j;
    cout<<"\n Value of j in obj 2 : "<<obj2.i;

    return 0;
}