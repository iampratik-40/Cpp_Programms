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
            Arr = new int[iSize];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter Elements of Array : "<<"\n";

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
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

        int Summation()
        {
            int iCnt = 0 , iSum = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{
    int iNo = 0 , iRet = 0;

    cout<<"Enter Size of Array : "<<"\n";
    cin>>iNo;

    Array aobj(iNo);

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Summation();

    cout<<"Summation of All Elemets of Array is : "<<iRet<<"\n";

    return 0;
}