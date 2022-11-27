#include<iostream>
using namespace std ;

class Circle
{  
    public :                 // Access Specifier
        float PI;            // Char
        float Radius;        // Char

        Circle()             // Default Constructor
        {
            PI = 3.14;
            Radius = 0.0;
        }

        Circle(float A , float B)  // Parametarised Constructror
        {
            PI = A;
            Radius = B;
        }

        void Display()     // Concrete Method
        {
            cout<<"\n value of Radius is : "<<Radius;
        }

        virtual float Area() = 0;    // Abstract Method
        virtual float Circum() = 0;  // Abstract Method

};

class Solution : public Circle
{
    public :
        Solution() : Circle()
        {
        }
        
        Solution(float X , float Y) : Circle(X,Y)
        {
        }

        float Area ()      // Concrete Method
            {
                float Ans = PI * Radius * Radius;
                return Ans;
            }

            float Circum()  // Concrete Method
            {
                float Ans = 2 * PI * Radius;
                return Ans;
            }

};

int main()
{
    Solution Sobj1;
    Solution Sobj2(3.14,10.89);

    float fRet = 0.0;

    fRet = Sobj2.Area();
    cout<<"\n Area is : "<<fRet;

    fRet = Sobj2.Circum();
    cout<<"\n Circum : "<<fRet;

    return 0;
}