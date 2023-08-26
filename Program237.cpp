// To check 9th and 4th Bit is ON

/*
000100001000
(0001)(0000)(1000) : 0X108
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X108;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    bRet = ChkBit(iValue);
    
    if(bRet == true)
    {
        cout<<"4TH and 9TH Bit are ON"<<"\n";
    }
    else
    {
        cout<<"4TH and 9TH Bit are OFF"<<"\n";
    }

    return 0;
}