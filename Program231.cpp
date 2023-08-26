#include<iostream>
using namespace std;

bool ChkBit(int iNo)
{
    int iMask = 4;
    int iResult = 0;

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
    int iValue = 0;
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