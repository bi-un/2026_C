#include <stdio.h>

struct Person {
    char name[30];
    int age;
};

int main() {
    struct Person me = {"Yejun", 12};
    struct Person p;

    scanf("%s %d", p.name, &p.age);

    printf("Your name: %s, age: %d\n", me.name, me.age);
    printf("Friend's name: %s, age: %d", p.name, p.age);

    return 0;
}