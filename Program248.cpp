// Toggle Bit.

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    
    iMask = iNo ^ iMask;

    return iResult;  
}

int main()
{
    UINT iValue = 0 , iBit = 0;
    UINT iRet = 0;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    cout<<"Enter Position : "<<"\n";
    cin>>iBit;

    iRet = ToggleBit(iValue , iBit);

    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}