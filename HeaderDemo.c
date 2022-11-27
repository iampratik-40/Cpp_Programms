//#include<stdio.h>
#include"Marvellous.h"

int main()
{
    struct Demo obj;

    int No = 11;
    float Radius = 30.6f;
    float Area = PI * Radius * Radius;
    
    IPTR  ptr = &No;

    printf("\n Area is : %f",Area);
    printf("\n Value of No is : %d",*ptr);

    return 0;
}