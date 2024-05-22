#include <stdio.h>
#include <stdlib.h>

typedef enum {OLSZTYN, GDANSK, KRAKOW, WARSZAWA, BYDGOSZCZ} miasta;

int main()
{
    miasta m1 = BYDGOSZCZ;
    //printf("%s\n",m1);
    printf("%d\n",m1);
    printf("%u\n",m1);
    printf("%Iu\n", sizeof(miasta));
    return 0;
}
