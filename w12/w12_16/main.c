#include <stdio.h>
#include <stdlib.h>

struct Punkt3D
{
    int * wspolrzedne;
};

void przepisz(struct Punkt3D tab1[], struct Punkt3D tab2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}

void wyswietl(struct Punkt3D tab[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("[%d]: ", i);
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", tab[i].wspolrzedne[j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    struct Punkt3D p1 = {.wspolrzedne=malloc(3*sizeof(int))};
    p1.wspolrzedne[0] = 1;
    p1.wspolrzedne[1] = 2;
    p1.wspolrzedne[2] = 3;
    struct Punkt3D p2 = {(int[]){4,5,6}};
    struct Punkt3D p3 = {(int[]){7,8,9}};
    struct Punkt3D tab1[] = {p1,p2,p3};
    struct Punkt3D tab2[] =
    {
            {(int[]){0,0,0}},
            {(int[]){0,0,0}},
            {(int[]){0,0,0}}
    };
    wyswietl(tab1, 3);
    wyswietl(tab2, 3);
    przepisz(tab1, tab2, 3);
    printf("Po przepisaniu:\n");
    wyswietl(tab1, 3);
    wyswietl(tab2, 3);
    tab1[0].wspolrzedne[2] = 22;
    printf("Po zmianie:\n");
    wyswietl(tab1, 3);
    wyswietl(tab2, 3);
    return 0;
}
