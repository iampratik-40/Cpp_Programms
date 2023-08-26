#include<iostream>
using namespace std;

void DisplayBinnary(int iNo)
{
    int iDigit = 0;

    cout<<"Binnary Conversion if "<<iNo<<"is : "<<"\n";
    
    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<<iDigit;
        iNo = iNo / 2;
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    DisplayBinnary(iValue);

    return 0;
}