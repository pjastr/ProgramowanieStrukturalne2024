#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 12;
    int b = 33;
    printf("%d %d\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("%d %d\n",a,b);
    return 0;
}
