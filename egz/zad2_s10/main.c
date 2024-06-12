#include <stdio.h>
#include <stdlib.h>

int floorSqrt(int arg){
    int i=0;
    while(i*i<=arg){
        i++;
    }
    return i-1;
}

int foo(int n){
    if (n==0 || n==1)
        return 1;
    if (n%2==0)
        return foo(n/2);
    return floorSqrt(n-1);
}

int main()
{
    printf("%d\n", floorSqrt(81));
    printf("%d\n", foo(1));
    printf("%d\n", foo(2));
    printf("%d\n", foo(3));
    printf("%d\n", foo(4));
    printf("%d\n", foo(5));
    return 0;
}
