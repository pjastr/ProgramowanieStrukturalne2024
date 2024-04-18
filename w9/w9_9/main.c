#include <stdio.h>

void strCopyNew(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Dodaj znak koñca napisu do tablicy docelowej
}

int main() {
    char src[] = "Testowy napis";
    char dest[100]; // Zak³adamy, ¿e jest wystarczaj¹co du¿o miejsca

    strCopyNew(src, dest);

    printf("zrodlo: %s\n", src);
    printf("cel: %s\n", dest);

    return 0;
}
