#include <stdio.h>

struct Person {
    char name[20];
    int tall;
};

int main() {
    struct Person p[3];

    for (int i = 0;i < 3;i++) {
        scanf("%s %d",p[i].name,&p[i].tall);
    }

    for (int i = 0;i < 3;i++) {
        printf("%s : %dcm\n",p[i].name,p[i].tall);
    }

    return 0;
}