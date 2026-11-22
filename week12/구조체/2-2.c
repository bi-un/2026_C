#include <stdio.h>

struct Person {
    char school [20];
    int grade;
};

int main() {
    struct Person first = {"Jejuelementary",6};
    struct Person p;

    scanf("%s %d",p.school,&p.grade);

    printf("%d grade in %s School\n",first.grade,first.school);
    printf("%d grade in %s School",p.grade,p.school);

    return 0;
}