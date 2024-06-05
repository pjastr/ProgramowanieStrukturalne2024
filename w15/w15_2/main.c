#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void addLast(struct element ** list, int a) {
    struct element *newElement = malloc(sizeof(struct element));
    newElement->x = a;
    newElement->next = NULL;
    if (*list == NULL) {
        *list = newElement;
        return;
    }
    struct element *current = *list;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newElement;
}

void printList(struct element *list) {
    struct element *current = list;
    while (current != NULL) {
        printf("%d\n", current->x);
        current = current->next;
    }
    printf("---\n");
}

int main() {
    // pusta lista
    struct element *list1 = NULL;
    printList(list1);
    addLast(&list1, 1);
    printList(list1);
    addLast(&list1, -4);
    printList(list1);
    addLast(&list1, 0);
    printList(list1);
    return 0;
}
