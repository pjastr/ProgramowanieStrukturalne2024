#include <stdio.h>

struct ksiazka {
    char tytul[50];
    char autor[50];
    int liczba_stron;
    float ocena;
};

void wyswietlKsiazki(struct ksiazka* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        printf("Tytul: %s\n", tablica[i].tytul);
        printf("Autor: %s\n", tablica[i].autor);
        printf("Liczba stron: %d\n", tablica[i].liczba_stron);
        printf("Ocena: %.2f\n", tablica[i].ocena);
        printf("\n");
    }
}

int main() {
    struct ksiazka biblioteka[2] = {
        {"Wiedzmin", "Andrzej Sapkowski", 320, 8.7},
        {"1984", "George Orwell", 328, 8.5}
    };

    wyswietlKsiazki(biblioteka, 2);

    return 0;
}
