#include <stdio.h>
#include <stdlib.h>

int suma(int tab[])
{
    int temp=0;
    //printf("%Iu\n", sizeof tab);
    //printf("%Iu\n", sizeof(int));
    for(int i=0;i<sizeof tab/sizeof(int);i++)
    {
        temp+=tab[i];
    }
    return temp;
}

int main()
{
    int tablica[5]={1,-4,2,0,3};
    //printf("%Iu\n", sizeof tablica);
    //printf("%Iu\n", sizeof(int));
    printf("%d\n",suma(tablica));
    return 0;
}
