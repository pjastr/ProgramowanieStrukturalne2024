#include <stdio.h>
#include <stdlib.h>

int x=0;

void foo()
{

    x++;
    printf("liczba wywolan: %d\n",x);
}

int main()
{
    foo();
    foo();
    return 0;
}
