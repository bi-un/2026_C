#include <stdio.h>

void print_reserve(char *s)
{
    size_t len = strlen(s);

    char *t = s + len - 1;

    while (t >= s ) {
        printf("%c", *t);

        t = t - 1;
    }
    puts("");
}

int main(void) {
    char str[100];

    printf("문자열 입력: ");
    scanf("%99s", str);

    printf("문자열 역순 출력: ");
    print_reserve(str);

}