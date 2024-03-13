#include <stdio.h>

int factorial(int n) {
    int temp = 1;
    for (int i = 1; i <= n; i++) {
        temp *= i;
    }
    return temp;
}

int main() {
    printf("%d\n", factorial(0));
    printf("%d\n", factorial(1));
    printf("%d\n", factorial(5));
    printf("%d\n", factorial(6));
    return 0;
}
