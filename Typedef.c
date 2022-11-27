#include<stdio.h>

// typedef JUNA_NAV  NAVIN_NAV

typedef int INTEGER;

typedef unsigned long int ULONG;

strcut Demo
{
    int a;
    int b;
};

typedef struct Demo DEMO; 

typedef struct Demo * PDEMO;

int main()
{
    INTEGER i = 10;  // int i = 10;

    ULONG j = 21;    // unsigned long int j = 21;

    DEMO Obj;     // struct Demo Obj1;
    
    PDEMO ptr = &Obj;  // strcut Demo * ptr = &Obj1;
    return 0;
}