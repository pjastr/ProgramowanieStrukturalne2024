#include <stdio.h>
#include <stdlib.h>

int ** foo(int n, int m)
{
    int ** tab = (int**) malloc(sizeof(int*)*n);
    tab[0]=(int*) malloc(sizeof(int)*m);
    tab[1]=(int*) malloc(sizeof(int)*m);
    return tab;
}

int main()
{
    int **t=foo(2,3);
    return 0;
}
