#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithoutHead(struct element *list) {
    if (list == NULL) {
        printf("Lista jest pusta\n");
        printf("---\n");
        return;
    }
    while (list != NULL) {
        printf("%d\n", list->x);
        list = list->next;
    }
    printf("---\n");
}

int main() {
    struct element *list1 = NULL;
    printListWithoutHead(list1);

    struct element *list2 = malloc(sizeof(struct element));
    list2->x = -3;
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 5;
    list2->next->next = NULL;
    printf("%p\n", list2);
    printListWithoutHead(list2);
    printf("%p\n", list2);
    printf("%Iu\n", sizeof(struct element));
    return 0;
}
