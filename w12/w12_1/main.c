#include <stdio.h>

struct Przyklad {
    char x;
    int y;
};

int main() {
    printf("Rozmiar struktury: %Iu bajty\n", sizeof(struct Przyklad));
    return 0;
}
