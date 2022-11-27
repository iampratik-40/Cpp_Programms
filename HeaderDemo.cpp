//#include<stdio.h>
#include"Marvellous.h"

int main()
{
    Demo obj;

    int No = 11;
    float Radius = 30.6f;
    float Area = PI * Radius * Radius;
    
    IPTR  ptr = &No;

    cout<<"\n Area is : "<<Area;
    cout<<"\n Value of No is : "<<*IPTR;

    return 0;
}