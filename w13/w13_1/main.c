#include <stdio.h>
#include <stdlib.h>

enum miasta {OLSZTYN, GDANSK=-3, KRAKOW, WARSZAWA, BYDGOSZCZ};

int main()
{
    enum miasta m1 = BYDGOSZCZ;
    //printf("%s\n",m1);
    printf("%d\n",m1);
    printf("%u\n",m1);
    return 0;
}
