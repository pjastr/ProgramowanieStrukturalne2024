#include <stdio.h>
#include <stdlib.h>

int checkPositive(int n, int tab[]){
    for(int i=0;i<n;i++){
        if (tab[i] <=0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int tab[] = {3,4,5};
    printf("%d\n", checkPositive(3, tab));
    return 0;
}
