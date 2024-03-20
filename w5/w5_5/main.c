#include <stdio.h>

// Deklaracje funkcji
int dodaj(int x, int y) {
    return x + y;
}

int odejmij(int x, int y) {
    return x - y;
}

int main() {
    // WskaŸnik na funkcjê przyjmuj¹c¹ dwa inty i zwracaj¹c¹ int
    int (*operacja)(int, int);

    operacja = dodaj; // Przypisujemy adres funkcji dodaj
    printf("Wynik dodawania: %d\n", operacja(5, 3));

    operacja = odejmij; // Przypisujemy adres funkcji odejmij
    printf("Wynik odejmowania: %d\n", operacja(5, 3));

    return 0;
}
