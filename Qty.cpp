#include<iostream>
using namespace std;

int Addition(int iVal1 , int iVal2)
{
    int iRet = 0;
    iRet = iVal1 + iVal2;
    return iRet;
}

int main()
{
    int iVal1 = 10;
    int iVal2 = 20;
    int Add = 0;

    Add = Addition(iVal1,iVal2);

    cout<<"\n Addition is : "<<Add;

    return 0;
}
