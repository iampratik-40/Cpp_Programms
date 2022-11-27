#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;

        Demo()
        {
            i = 0;
            j = 0;
        }

        Demo(int a , int b)
        {
            i = a;
            j = b;
        }

        Demo(Demo &ref)
        {
            i = ref.i;
            j = ref.j;
        }
};

int main()
{
    Demo Obj1;
    Demo Obj2(11,21);
    Demo Obj3(Obj2);

    cout<<"\n"<<Obj1.i<<"\t"<<Obj1.j;
    cout<<"\n"<<Obj2.i<<"\t"<<Obj2.j;
    cout<<"\n"<<Obj3.i<<"\t"<<Obj3.j;

    return 0;
}