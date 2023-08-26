// Accpet Number from user and OFF bit accpetd from user of that number.

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)  // Bit is ON
    {
        return (iNo ^ iMask);

    }
    else    // Bit is OFF
    {
        return iNo;
    }  
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