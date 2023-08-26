// To check 3rd Bit is On

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X4;
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
        cout<<"Third Bit is ON"<<"\n";
    }
    else
    {
        cout<<"Third Bit is OFF"<<"\n";
    }

    return 0;
}