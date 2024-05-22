#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Ksiazka {
    char tytul[50];
    int liczba_stron;
} Ksiazka;

Ksiazka* initKsiazka(const char *tytul, int liczba_stron) {
    if(strlen(tytul) < 5 || liczba_stron <= 50)
        return NULL;

    Ksiazka* nowa_ksiazka = (Ksiazka*)malloc(sizeof(Ksiazka));
    strcpy(nowa_ksiazka->tytul, tytul);
    nowa_ksiazka->liczba_stron = liczba_stron;

    return nowa_ksiazka;
}

void pokazKsiazka(Ksiazka ksiazka) {
    printf("Tytul: %s, Liczba stron: %d\n", ksiazka.tytul, ksiazka.liczba_stron);
}

void dodajStrony(Ksiazka *ksiazka) {
    ksiazka->liczba_stron += 10;
}

int main() {
    Ksiazka* ksiazka1 = initKsiazka("Wojna i pokoj", 234);

    if(ksiazka1 != NULL) {
        pokazKsiazka(*ksiazka1);
        dodajStrony(ksiazka1);
        pokazKsiazka(*ksiazka1);
    } else {
        printf("Nie udalo sie utworzyc ksiazki.\n");
    }

    free(ksiazka1);

    return 0;
}
