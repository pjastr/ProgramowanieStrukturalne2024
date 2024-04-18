#include <stdio.h>

int isVowel(char c) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (c == vowels[i]) {
            return 1;
        }
    }
    return 0;
}

void rmVowel(char txt[]) {
    int readIndex = 0, writeIndex = 0;
    while (txt[readIndex] != '\0') {
        if (!isVowel(txt[readIndex])) {
            txt[writeIndex++] = txt[readIndex];
        }
        readIndex++;
    }
    txt[writeIndex] = '\0'; // Zakoñczenie napisu znakiem koñca
}

int main() {
    char str[] = "Hello, World!";
    rmVowel(str);
    printf("%s\n", str); // Wypisze "Hll, Wrld!"
    return 0;
}
