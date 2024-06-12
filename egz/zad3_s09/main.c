#include <stdio.h>
#include <stdlib.h>

void swap(int ** tab, int n, int m){
    if (n<4)
        return;
    int * wiersz = tab[1];
    int * wierszPrzedostatni = tab[n-2];
    tab[1] = wierszPrzedostatni;
    tab[n-2] = wiersz;
}

void printTable(int ** tab, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int ** tab = malloc(4*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[3] = malloc(3*sizeof(int));
    tab[0][0] = 4;tab[0][1] = -6;tab[0][2] = 7;
    tab[1][0] = 6;tab[1][1] = 2;tab[1][2] = -6;
    tab[2][0] = 2;tab[2][1] = 3;tab[2][2] = 4;
    tab[3][0] = -9;tab[3][1] = 4;tab[3][2] = 5;
    printTable(tab, 4,3);
    swap(tab,4,3);
    printTable(tab, 4,3);
    return 0;
}
