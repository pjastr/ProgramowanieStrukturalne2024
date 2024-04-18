#include <stdio.h>

// Funkcja por�wnuj�ca dwa napisy leksykograficznie
int lexComp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            return 1; // str1 jest p�niej w porz�dku leksykograficznym ni� str2
        }
        if (str1[i] < str2[i]) {
            return 0; // str1 jest wcze�niej w porz�dku leksykograficznym ni� str2
        }
        i++;
    }

    // Je�li wszystkie odpowiadaj�ce sobie znaki s� takie same, ale napisy maj� r�n� d�ugo��
    if (str1[i] == '\0' && str2[i] != '\0') {
        return 0; // str1 jest kr�tszy, wi�c wcze�niej leksykograficznie
    }
    if (str1[i] != '\0' && str2[i] == '\0') {
        return 1; // str2 jest kr�tszy, wi�c str1 jest p�niej leksykograficznie
    }

    return 0; // Napisy s� identyczne
}

int main() {
    char str1[] = "abc";
    char str2[] = "abcd";
    char str3[] = "abC";
    char str4[] = "abc";

    printf("Porownanie '%s' i '%s': %d\n", str1, str2, lexComp(str1, str2)); // Powinno zwr�ci� 0
    printf("Porownanie '%s' i '%s': %d\n", str1, str3, lexComp(str1, str3)); // Powinno zwr�ci� 1
    printf("Porownanie '%s' i '%s': %d\n", str1, str4, lexComp(str1, str4)); // Powinno zwr�ci� 0

    return 0;
}
