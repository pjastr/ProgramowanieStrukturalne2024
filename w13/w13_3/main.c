#include <stdio.h>
#include <string.h>

struct Laptop {
    char model[30];
    float cena;
};

struct Laptop initLaptop(char* model, float cena) {
    struct Laptop nowyLaptop;
    strncpy(nowyLaptop.model, model, sizeof(nowyLaptop.model) - 1);
    nowyLaptop.model[sizeof(nowyLaptop.model) - 1] = '\0';
    nowyLaptop.cena = cena;
    return nowyLaptop;
}

void pokazLaptop(struct Laptop laptop) {
    printf("Model: %s\n", laptop.model);
    printf("Cena: %.2f\n", laptop.cena);
}

void zmniejszCene(struct Laptop* laptop) {
    laptop->cena *= 0.95;
}

int main() {
    struct Laptop mojLaptop = initLaptop("Dell XPS 15", 5000.0);
    pokazLaptop(mojLaptop);
    zmniejszCene(&mojLaptop);
    printf("Po obnizce ceny:\n");
    pokazLaptop(mojLaptop);
    return 0;
}
