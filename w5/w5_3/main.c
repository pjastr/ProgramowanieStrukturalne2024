#include <stdio.h>
#include <stdlib.h>

int funkcja(int n){
    int suma;
    for(int i=0;i<=n;i++){
        suma+=i;
    }
    return suma;
}

int main()
{
    printf("Wynik: %d\n", funkcja(10));
}
