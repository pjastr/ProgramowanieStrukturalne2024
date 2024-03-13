#include <stdio.h>

int floorSqrt(int n){
    int i = 0;
    while(i*i <= n) {
        i++;
    }
    return i-1;
}

int main() {
    printf("%d\n", floorSqrt(16));
    printf("%d\n", floorSqrt(17));
    return 0;
}
