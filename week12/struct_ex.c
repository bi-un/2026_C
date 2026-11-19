#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p;

    printf("이름을 입력하세요: ");
    scanf("%s", p.name);

    printf("나이를 입력하세요: ");
    scanf("%d", &p.age);

    printf("\n--- 입력된 정보 ---\n");
    printf("이름: %s\n", p.name);
    printf("나이: %d세\n", p.age);

    return 0;
}
