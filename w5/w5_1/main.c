#include <stdio.h>
#include <stdlib.h>

int ciag(int n){
    if (n==0 || n==1){
        return 1;
    }
    if (n%3 == 0){
        return ciag(n/3);
    }
    if (n%3 == 1){
        return ciag(n-1) -1;
    }
    return ciag(n-1)+1;
}

int main()
{
    printf("%d\n", ciag(4));
    return 0;
}
