#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    tab[0]=(int*) malloc(sizeof(int)*3);
    tab[1]=(int*) malloc(sizeof(int)*3);
    *(*(tab+0)+0) = 8;
    *(*(tab+0)+1) = -2;
    *(*(tab+0)+2) = 4;
    *(*(tab+1)+0) = 6;
    *(*(tab+1)+1) = 7;
    *(*(tab+1)+2) = -4;
    for(int i=0;i<2;i++){
        printf("%p\n", &tab[i]);
        printf("%p\n", tab[i]);
        for(int j=0;j<3;j++){

            printf("[%d,%d]=%d, adres = %p\n",i,j,tab[i][j], &tab[i][j]);

        }
    }
    return 0;
}
