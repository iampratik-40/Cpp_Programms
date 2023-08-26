//To check 11th Bit is On

/*
    010000000000
    (0100)(0000)(0000) : 0X400
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X400;
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
        cout<<"11TH Bit is ON"<<"\n";
    }
    else
    {
        cout<<"11TH Bit is OFF"<<"\n";
    }

    return 0;
}