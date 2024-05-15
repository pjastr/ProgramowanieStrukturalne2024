#include <stdio.h>

struct Punkt {
    float x;
    float y;
};

typedef struct Punkt Punkt;

int main() {
    struct Punkt punkt = {3.0, 4.0};
    printf("Punkt: (%.1f, %.1f)\n", punkt.x, punkt.y);
    return 0;
}
