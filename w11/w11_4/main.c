#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("TAB[%d, %d]= ",i,j);
            scanf("%d",*(tab+i)+j);
            printf("%p \n",&tab[i][j]);
        }
    }
    return 0;
}
