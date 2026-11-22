#include <stdio.h>
#include <string.h>

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
            if (strcmp(p[j].name, p[j + 1].name) > 0) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %g\n", p[i].name, p[i].height, p[i].weight);
    }

    return 0;
}