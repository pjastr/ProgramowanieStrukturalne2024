#include <stdio.h>
#include <stdlib.h>

struct Person {
    char *name;
    int age;
};

struct Person *create_person(char *name, int age) {
    struct Person *new_person = malloc(sizeof(struct Person));
    new_person->name = name;
    new_person->age = age;
    return new_person;
}

int main() {
    struct Person *person1 = create_person("John Doe", 30);
    printf("Name: %s, Age: %d\n", person1->name, person1->age);
    free(person1);
    return 0;
}
