#include <stdio.h>

int minIdxMax(int n, int tab[]) {
    int index = 0;
    for(int i = 1; i < n; i++) {
        if(tab[i] <= tab[index]) {
            index = i;
        }
    }
    return index;
}

int main() {
    int tab[] = {6, 23, -6, 4, 23, 13, 12, 8, -6, 1};
    int n = 10;
    printf("%d\n", minIdxMax(n, tab));
    return 0;
}
