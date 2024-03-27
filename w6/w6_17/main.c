#include <stdio.h>
#include <stdlib.h>

int *create_array(int size) {
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    return arr;
}

int main() {
    int size = 5;
    int *array = create_array(size);
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    free(array); // Zwolnij pamiêæ
    return 0;
}
