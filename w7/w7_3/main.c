#include <stdio.h>
#include <stdlib.h>

int* shiftRight(int n, int tab[]) {
    int* newTab = malloc(n * sizeof(int));
    *newTab = tab[n - 1];
    for (int i = 1; i < n; i++) {
        *(newTab+i) = tab[i - 1];
    }
    return newTab;
}

int main() {
    int tab[] = {3, -2, 4, 6, -8};
    int* newTab = shiftRight(5, tab);
    for (int i = 0; i < 5; i++) {
        printf("%d ", newTab[i]);
    }
    free(newTab);
    return 0;
}
