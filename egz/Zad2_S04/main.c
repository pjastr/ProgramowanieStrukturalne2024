#include <stdio.h>
#include <stdlib.h>

int positive_count(int tab[], int n, int (*wsk)(int)){
    int counter =0;
    for(int i=0;i<n;i++){
        if (wsk (tab[i]) >0 ){
            counter++;
        }
    }
    return counter;
}

int foo(int arg){
    return arg+4;
}

int main()
{
    int tab[] = {3,-4,8,19};
    printf("%d\n",positive_count(tab, 4, foo));
    return 0;
}
