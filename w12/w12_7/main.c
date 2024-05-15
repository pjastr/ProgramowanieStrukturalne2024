#include <stdio.h>

typedef struct {
    float x;
    float y;
} Punkt2D;

int main() {
    Punkt2D punkt = {3.0, 4.0};
    printf("Punkt: (%.1f, %.1f)\n", punkt.x, punkt.y);
    return 0;
}
