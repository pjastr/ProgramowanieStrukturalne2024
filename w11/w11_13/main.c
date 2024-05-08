#include <stdio.h>

#pragma pack ( 1 )
struct Przyklad {
    char x;
    int y;
};

int main() {
    printf("Rozmiar struktury: %Iu bajty\n", sizeof(struct Przyklad));
    return 0;
}
