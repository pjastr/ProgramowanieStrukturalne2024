#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 3

int main()
{
    int * tab = malloc(3*sizeof(int));
    *tab = 4;
    *(tab+1) = 0;
    *(tab+2) = -2;
    printf("%i\n",tab==&tab[0]);
    printf("%p\n", &tab[0]);
    printf("%p\n", &tab[1]);
    printf("%p\n", &tab[2]);
    printf("%p\n", tab);
    printf("%p\n", tab+1);
    printf("%p\n", tab+2);
    printf("%p\n", &tab);
    printf("%d %d\n", *(tab+0), tab[0]);
    printf("%d %d\n", *(tab+1), tab[1]);
    printf("%d %d\n", *(tab+2), tab[2]);
    free(tab);
    return 0;
}
