#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int i , j;

            void fun()
            {
                cout<<"\n Inside fun of Demo from Marvellous ";
            }
    };

    class Hello
    {
        public:
            int x , y;

    };
}

namespace Infosystems
{
    class Demo
    {
        public:
            int a, b;

            void fun()
            {
                cout<<"\n Inside fun of Demo from Infosystems"
            }

    };
} 
int main()
{

    return 0;
}