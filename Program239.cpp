// To check 7th , 14th and 21th Bit is ON 

/*
0000 0000 0000 0000 0000 0000
0001 0000 0010 0000 0100 0000  
0X102040
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X102040;
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
        cout<<"7TH , 14TH and 21TH Bit are ON"<<"\n";
    }
    else
    {
        cout<<"7TH , 14TH and 21TH Bit are OFF"<<"\n";
    }

    return 0;
}