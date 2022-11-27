#include<iostream>
using namespace std;

class Demo 
{
    public:
        int i , j;

        // Parameteraied constructor with Default values
        Demo(int x = 10 , int y = 20)
        {
            i = x;
            j = y;
        }

        void Fun()
        {
            i++;
            j++;
        }

        void Gun() const
        {
            i++;
            j++;
        }
};

int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11,21);

    return 0;
}