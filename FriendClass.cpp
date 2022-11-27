#include<iostream>
using namespace std;

class Marvellous
{
    public:
        void Fun();
};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
    friend class Marvellous; 
};

void Marvellous :: Fun()     // Naked Function
{    
    Demo DObj;

    cout<<"\n Value of i : "<<DObj.i;
    cout<<"\n Value of j : "<<DObj.j;
    cout<<"\n Value of k : "<<DObj.k;
}

int main()
{   
    Marvellous Mobj;

    Mobj.Fun();

    return 0;
}