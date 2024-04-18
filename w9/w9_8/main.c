#include <stdio.h>

// Funkcja porównuj¹ca dwa napisy leksykograficznie
int lexComp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            return 1; // str1 jest póŸniej w porz¹dku leksykograficznym ni¿ str2
        }
        if (str1[i] < str2[i]) {
            return 0; // str1 jest wczeœniej w porz¹dku leksykograficznym ni¿ str2
        }
        i++;
    }

    // Jeœli wszystkie odpowiadaj¹ce sobie znaki s¹ takie same, ale napisy maj¹ ró¿n¹ d³ugoœæ
    if (str1[i] == '\0' && str2[i] != '\0') {
        return 0; // str1 jest krótszy, wiêc wczeœniej leksykograficznie
    }
    if (str1[i] != '\0' && str2[i] == '\0') {
        return 1; // str2 jest krótszy, wiêc str1 jest póŸniej leksykograficznie
    }

    return 0; // Napisy s¹ identyczne
}

int main() {
    char str1[] = "abc";
    char str2[] = "abcd";
    char str3[] = "abC";
    char str4[] = "abc";

    printf("Porownanie '%s' i '%s': %d\n", str1, str2, lexComp(str1, str2)); // Powinno zwróciæ 0
    printf("Porownanie '%s' i '%s': %d\n", str1, str3, lexComp(str1, str3)); // Powinno zwróciæ 1
    printf("Porownanie '%s' i '%s': %d\n", str1, str4, lexComp(str1, str4)); // Powinno zwróciæ 0

    return 0;
}
