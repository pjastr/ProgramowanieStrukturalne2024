#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

//rozwiazanie za pomoca podwojnego wskaznika
void addFirst(struct element ** list, int a) {
    struct element *newElement = malloc(sizeof(struct element));
    newElement->x = a;
    newElement->next = *list;
    *list = newElement;
}

void printList(struct element *list) {
    while (list != NULL) {
        printf("%d\n", list->x);
        list = list->next;
    }
    printf("---\n");
}

int main() {
    // lista bez glowy o elementach 3,-4
    struct element * list1 = malloc(sizeof(struct element));
    list1->x = 3;
    list1->next = malloc(sizeof(struct element));
    list1->next->x = -4;
    list1->next->next = NULL;
    printList(list1);
    addFirst(&list1, 5);
    printList(list1);
    // pusta lista bez glowy
    struct element * list2 = NULL;
    printList(list2);
    addFirst(&list2, 5);
    printList(list2);
    return 0;
}
