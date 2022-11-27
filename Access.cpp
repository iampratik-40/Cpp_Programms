#include<iostream>
using namespace std;

class Base
{
    public :
        int i;
    private :
        int j;
    protected :
        int k;
    
    public :
        Base()
        {
            i = 10;
            j = 20;
            k = 30;
        }

        void Fun()
        {
            cout<<"\n Value of public i From Fun : "<<i;
            cout<<"\n Value of private j From Fun : "<<j;
            cout<<"\n Value of protected k From Fun : "<<k;
        }
};

int main()
{
    Base bObj;

    cout<<"\n Value of public i : "<<bObj.i;   //Allowed
    //cout<<"\n Value of private j : "<<j;   //NA
    //cout<<"\n Value of protected k : "<<k;   //NA
 
    bObj.Fun();

    return 0;
}