#include <stdio.h>
#include <stdlib.h>

void foo5(int a)
{
    a = 5;
    printf("%d\n",a*=8);
}

int main()
{
    int a=10;
    foo5(a);
    printf("a na koncu %d\n", a);
    return 0;
}
