#include<iostream>
using namespace std;

// Call by Value
void fun(int No)
{
    cout<<"\n Inside Call by Value : "<<no;
}

// Call by Address
void gun(int *p)
{
    cout<<"\n Inside Call by Address : "<<*p;
}

// Call by Refernence
void sun(int &ref)
{
    cout<<"\n Inside Call by Reference : "<<ref;
}

int main()
{
    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);
    gun(&j);
    sun(k);

    return 0;
}
