#include <stdio.h>

struct Punkt2D {
    float x;
    float y;
};

void przesun_punkt(struct Punkt2D *p, float dx, float dy) {
    p->x += dx;
    p->y += dy;
}

int main() {
    struct Punkt2D punkt = {3.0, 4.0};
    printf("Punkt przed przesunieciem: (%.1f, %.1f)\n", punkt.x, punkt.y);
    przesun_punkt(&punkt, 2.0, 3.0); // przekazanie struktury przez wskaünik
    printf("Punkt po przesunieciu: (%.1f, %.1f)\n", punkt.x, punkt.y);
    return 0;
}
