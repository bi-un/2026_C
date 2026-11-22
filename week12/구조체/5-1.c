#include <stdio.h>

struct Person {
    char name[20];
    int height;
    double weight;
};

int main() {
    struct Person p[5], temp;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %lf", p[i].name, &p[i].height, &p[i].weight);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (p[j].height > p[j + 1].height) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", p[i].name, p[i].height, p[i].weight);
    }

    return 0;
}