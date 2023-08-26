// Toggle Bit.

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0X00000001;

    return (iNo ^ iMask);  
}

int main()
{
    UINT iValue = 0 , iBit = 0;
    UINT iRet = 0;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    cout<<"Enter Position : "<<"\n";
    cin>>iBit;

    iRet = OffBit(iValue , iBit);

    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}