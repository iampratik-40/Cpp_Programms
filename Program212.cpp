#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;

        Array(int iNo)
        {
            iSize = iNo;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter Elements : "<<"\n";

            for(iCnt = 0 ;iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elemets of Array are : "<<"\n";

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

};

int main()
{
    int iNo;

    cout<<"Enter Number of Elemets : "<<"\n";
    cin>>iNo;

    Array aobj(iNo);

    aobj.Accept();
    aobj.Display();

    return 0;
}