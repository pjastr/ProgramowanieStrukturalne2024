#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->i = 2;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->i = 4;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->i = -3;
    list->next->next->next->next = NULL;
    struct element * wsk = list->next;
    while(wsk!= NULL){
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    return 0;
}
