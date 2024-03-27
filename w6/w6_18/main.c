#include <stdio.h>
#include <stdlib.h>

int maxValue(int n, int tab[n]) {
    if (n<=0){
        printf("blad\n");
        exit(-1);
    }
    else{
        int max = tab[0];
        for (int i = 1; i < n; i++) {
            if (tab[i] > max) {
                max = tab[i];
            }
        }
        return max;
    }
}

int main() {
    int tab[] = {1, -2, 12, -4, 22};
    printf("maxValue: %d\n", maxValue(5, tab));
    return 0;
}
