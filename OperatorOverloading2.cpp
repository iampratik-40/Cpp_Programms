#include<iostream>
using namespace std;

class Demo
{
    private:
        int A , B;
    public:
        Demo(int i = 0, int j = 0)
        {
            A = i;
            B = j;
        }

        void Display()
        {
            cout<<"\n"<<A;
            cout<<"\n"<<B;
        }

        friend Demo operator + (Demo , Demo);
        friend Demo operator - (Demo , Demo);
        friend Demo operator * (Demo , Demo);
        friend Demo operator / (Demo , Demo);
};

Demo operator + (Demo obj1 , Demo obj2)
{
    cout<<"\n Inside + Operator";
    return Demo(obj1.A+obj2.A, obj1.B+obj2.B);
}

/*

OR

Demo operator + (Demo obj1 , Demo obj2)
{
    cout<<"\n Inside + Operator";
    int iNo1 = 0;
    int iNo2 = 0;

    iNo1 = obj1.A+obj2.A;
    iNo2 = obj1.B+obj2.B;

    return Demo(iNo1, iNo2);
}
*/

Demo operator - (Demo obj1 , Demo obj2)
{
    cout<<"\n Inside - Operator";
    return Demo(obj1.A-obj2.A, obj1.B-obj2.B);
}

Demo operator * (Demo obj1 , Demo obj2)
{
    cout<<"\n Inside * Operator";
    return Demo(obj1.A*obj2.A, obj1.B*obj2.B);
}

Demo operator / (Demo obj1 , Demo obj2)
{
    cout<<"\n Inside / Operator";
    return Demo(obj1.A/obj2.A, obj1.B/obj2.B);
}

int main()
{
    Demo X(10,20);
    Demo Y(30,40);
    Demo Ans(0,0);
    
    Ans = X + Y;
    Ans.Display();

    Ans = X - Y;
    Ans.Display();

    Ans = X * Y;
    Ans.Display();
    
    Ans = X / Y;
    Ans.Display();

    //cout<<"\n"<<Ans.A;
    //cout<<"\n"<<Ans.B;

    Ans.Display();

    return 0;
}