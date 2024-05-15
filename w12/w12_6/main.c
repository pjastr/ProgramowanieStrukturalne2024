#include <stdio.h>

struct ksiazka {
    char tytul[50];
    char autor[50];
    int liczba_stron;
    float ocena;
};

struct ksiazka znajdzKsiazkeZNajwiekszaLiczbaStron(struct ksiazka* tablica, int rozmiar) {
    struct ksiazka najwieksza = tablica[0];

    for (int i = 1; i < rozmiar; i++) {
        if (tablica[i].liczba_stron > najwieksza.liczba_stron) {
            najwieksza = tablica[i];
        }
    }

    return najwieksza;
}

int main() {
    struct ksiazka biblioteka[3] = {
        {"Wiedzmin", "Andrzej Sapkowski", 320, 8.7},
        {"1984", "George Orwell", 328, 8.5},
        {"War and Peace", "Leo Tolstoy", 1225, 9.0}
    };

    struct ksiazka najwieksza = znajdzKsiazkeZNajwiekszaLiczbaStron(biblioteka, 3);

    printf("Ksiazka z najwieksza liczba stron to: %s\n", najwieksza.tytul);
    printf("Liczba stron: %d\n", najwieksza.liczba_stron);

    return 0;
}
