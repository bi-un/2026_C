#include <stdio.h>

struct Person {
    char name[20];
    int score;
};

int main() {
    struct Person p[5];

    for (int i = 0;i < 5;i++) {
        scanf("%s %d",p[i].name,&p[i].score);
    }
    int max = p[0].score;
    int index = 0;

    for (int i = 1;i < 5; i++) {
        if (p[i].score > max) {
            max = p[i].score;
            index = i;
        }
    }

    printf("%s %d",p[index].name,p[index].score); 

    return 0;
}