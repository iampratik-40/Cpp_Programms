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
};

class Derived : public Base
{
    public :
        void Fun()
        {
            cout<<"\n Value of public i of Base : "<<i;
            //cout<<"\n Value of private j of Base : "<<j;
            cout<<"\n Value of protected k of Base : "<<k;            
        }
};

int main()
{
    Derived dObj;

    dObj.Fun();
    
    return 0;
}