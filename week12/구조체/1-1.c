#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person p;

    scanf("%s", p.name);
    scanf("%d", &p.age);

    printf("Your name is %s and you are %d years old.", p.name, p.age);

    return 0;
}