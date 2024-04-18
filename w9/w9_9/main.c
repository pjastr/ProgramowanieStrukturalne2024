#include <stdio.h>

void strCopyNew(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Dodaj znak ko�ca napisu do tablicy docelowej
}

int main() {
    char src[] = "Testowy napis";
    char dest[100]; // Zak�adamy, �e jest wystarczaj�co du�o miejsca

    strCopyNew(src, dest);

    printf("zrodlo: %s\n", src);
    printf("cel: %s\n", dest);

    return 0;
}
