#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[2][3] = {{8,-2,4},{6,7,-4}};
    for(int i=0;i<2;i++){
        printf("%p\n", &tab[i]);
        printf("%p\n", tab[i]);
        for(int j=0;j<3;j++){

            printf("[%d,%d]=%d, adres = %p\n",i,j,tab[i][j], &tab[i][j]);

        }
    }
    return 0;
}
