#include <stdio.h>

void rmVowel(char txt[]);

int isVowel(char c);

int main() {
    char str[] = "345465";
    rmVowel(str);
    printf("%s\n", str); // Wypisze "Hll, Wrld!"
    return 0;
}

void rmVowel(char txt[])
{
    int readIndex = 0, writeIndex = 0;
    while (txt[readIndex] != '\0') {
        if (!isVowel(txt[readIndex])) {
            txt[writeIndex++] = txt[readIndex];
        }
        readIndex++;
    }
    txt[writeIndex] = '\0'; // Zakończenie napisu znakiem końca
}

int isVowel(char c) {
    char vowels[] = "0123456789";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (c == vowels[i]) {
            return 1;
        }
    }
    return 0;
}

