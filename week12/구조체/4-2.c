#include <stdio.h>

struct Person {
    char name[20];
    int tall;
};

int main() {
    struct Person p[5];

    for (int i = 0;i < 5;i++) {
        scanf("%s %d",p[i].name,&p[i].tall);
    }

    int min = p[0].tall;
    int index = 0;

    for (int i = 1; i < 5; i++) {
        if(p[i].tall < min) {
            min = p[i].tall;
            index = i;
        }
    }
    printf("%s %d",p[index].name,p[index].tall);

    return 0 ;
}