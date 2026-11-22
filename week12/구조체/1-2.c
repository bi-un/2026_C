#include <stdio.h>

struct School {
    char name[20];
    char school[20];
    int grade;
};

int main() {
    struct School s;

    scanf("%s", s.name);
    scanf("%s", s.school);
    scanf("%d", &s.grade);

    printf("Name : %s\n", s.name);
    printf("School : %s\n", s.school);
    printf("Grade : %d", s.grade);

    return 0;
}