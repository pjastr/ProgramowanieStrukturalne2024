#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="algorytm";
    char z = *(napis+3); //z=111 'o'
    int a = napis[5]; // a=121   ,z=111 'o'
    z++; // a=121   ,z=112 'p'
    int b= a++; // a=122   , b=121  ,z=112 'p'
    a=a-4; // a=118   , b=121  ,z=112 'p'
    z-=5; // a=118   , b=112  ,z=107 'k'
    z=(a-=2)+3; // a=116   , b=121  ,z=119 'w'
    return 0;
}

