#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<5;i+=3)
    {
        printf("%d\n",i);
    }
    printf("---\n");
    printf("%d\n",i);
    return 0;
}
