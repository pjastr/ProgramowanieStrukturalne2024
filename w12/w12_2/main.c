#include <stdio.h>
#include <stdlib.h>


 struct Struktura {
   int pole1;
    double pole2;
   char pole3;

 };

int main()
{
    struct Struktura zmiennaS =
        { .pole1=60, .pole2=0.2, .pole3='a'};
    printf("%Iu\n", sizeof(struct Struktura));
    printf("%p\n",&zmiennaS.pole1);
    printf("%p\n",&zmiennaS.pole2);
    printf("%p\n",&zmiennaS.pole3);
}
