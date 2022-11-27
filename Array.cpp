#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize ;
        int *Arr;
        
        Array(int iLength)
        {
            cout<<"\n Inside Constructor";

            iSize = iLength;
            Arr = new int[iSize];
        }

        ~Array()
        {   
            cout<<"\n Inside Destructor";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"\n Enter the Values :";
            
            int i = 0;

            for (i=0 ;i<iSize ; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            cout<<"\n Elements of Array are : ";

            int i = 0;

            for (i=0 ; i<iSize ; i++)
            {
                cout<<"\n"<<Arr[i];
            }
        }

};

int main()
{
    cout<<"\n Inside Main";

    Array obj1(4);
    //Array obj2(6);

    obj1.Accept();
    obj1.Display();

    return 0;
}