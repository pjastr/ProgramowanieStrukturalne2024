#include <stdio.h>
#include <stdlib.h>

void reverseArr(int n, int *tab) {
    for (int i = 0; i < n / 2 ; i++) {
        int temp = *(tab + i);
        *(tab + i) = *(tab + n - i - 1);
        *(tab + n - i - 1) = temp;
    }
}

void printArr(int n, int *tab) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(tab + i));
    }
    printf("\n");
}

int main() {
    int * tab = malloc(5 * sizeof(int));
    * tab = 7;
    * (tab + 1) = 3;
    * (tab + 2) = -5;
    * (tab + 3) = 2;
    * (tab + 4) = 13;
    printArr(5, tab);
    reverseArr(5, tab);
    printf("After reversing:\n");
    printArr(5, tab);
    free(tab);
    return 0;
}
