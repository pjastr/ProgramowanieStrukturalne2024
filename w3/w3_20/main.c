#include <stdio.h>
#include <stdlib.h>

void foo()
{
    static int x=0;
    x++;
    printf("liczba wywolan: %d\n",x);
}

int main()
{
    foo();
    foo();
    foo();
    foo();
    foo();
    return 0;
}
