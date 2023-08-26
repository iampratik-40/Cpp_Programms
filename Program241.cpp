// To check User Input bit is ON or OFF 

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid Position"<<"\n";
    }

    iMask = iMask << (iPos -1);
    
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
    UINT iBit = 0;
    bool bRet = false;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    cout<<"Enter Bit Position (Range should be 1 to 32) : "<<"\n";
    cin>>iBit;

    bRet = ChkBit(iValue , iBit);
    
    if(bRet == true)
    {
        cout<<"Bit is ON"<<"\n";
    }
    else
    {
        cout<<"Bit is OFF"<<"\n";
    }

    return 0;
}