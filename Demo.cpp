#include<iostream>
using namespace std;

class Demo
{
    public :
        int iNo1 ;
        int iNo2 ;
        static int iNo3 ;
        static int iNo4 ;

        Demo(int A , int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

        void Fun()
        {
            cout<<"\n Inside FUN ";
            cout<<"\n value of Int 1 : "<<iNo1;
            cout<<"\n value of Int 2 : "<<iNo2;
            cout<<"\n value of Static Int 3 : "<<iNo3;
            cout<<"\n value of Static Int 4 : "<<iNo4;
        }

        static void Gun()
        {
            cout<<"\n Inside GUN ";
            //cout<<"\n value of Int 1 : "<<iNo1;
            //cout<<"\n value of Int 2 : "<<iNo2;
            cout<<"\n value of Static Int 3 : "<<iNo3;
            cout<<"\n value of Static Int 4 : "<<iNo4;
        }


};

int Demo::iNo3 = 100;
int Demo::iNo4 = 200;

int main()
{
    cout<<"\n Inside Main ";

    cout<<"\n Value of Static Int 3 : "<<Demo::iNo3;
    cout<<"\n Value of Static Int 4 : "<<Demo::iNo4;

    Demo Obj1(500,50);

    Obj1.Fun();

    Obj1.Gun();

    return 0;
}