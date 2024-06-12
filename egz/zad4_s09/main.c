#include <stdio.h>
#include <stdlib.h>

struct node{
    int a;
    struct node * next;
};

void foo(struct node * lista){
    if (lista == NULL){
        return;
    }
    float suma =0;
    int licznik=0;
    struct node * wsk=lista;
    while(wsk!=NULL){
        suma += wsk->a;
        licznik++;
        wsk= wsk->next;
    }
    float srednia = suma/licznik;
    //printf("%f\n", srednia);
    wsk = lista;
    while(wsk != NULL){
        if (wsk->a > srednia)
            printf("%p\n", &wsk->a);
        wsk = wsk->next;
    }
}

int main()
{
    struct node * list = malloc(sizeof(struct node));
    list->a = 0;
    list->next = malloc(sizeof(struct node));
    list->next->a = 5;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->a = 7;
    list->next->next->next = NULL;
    foo(list);
    return 0;
}
