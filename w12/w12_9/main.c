#include <stdio.h>

struct Punkt2D {
    float x;
    float y;
};

void wypisz_punkt(struct Punkt2D p) {
    printf("Punkt: (%.1f, %.1f)\n", p.x, p.y);
}

int main() {
    struct Punkt2D punkt = {3.0, 4.0};
    wypisz_punkt(punkt); // przekazanie struktury przez wartoœæ
    return 0;
}
