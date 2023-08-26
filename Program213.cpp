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

        ~Arr()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter The Elemets : "<<"\n";

            int iCnt = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

};

int main()
{
    int iNo = 0;

    cout<<"Enter Number of Elemets of Array : "<<"\n";
    cin>>iNo;

    Array aobj;

    aobj.Accept();
    aobj.Display();
    
    return 0;
}