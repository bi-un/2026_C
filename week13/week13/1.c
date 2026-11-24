#include <stdio.h>

void test(int arr[], int *ptr) {
    printf("\n[함수 내부]\n");

    printf("arr[0] = %d\n", arr[0]);
    printf("ptr[0] = %d\n", ptr[0]);

    arr++;
    ptr++;

    printf("arr++ 이후: %d\n", arr[0]);
    printf("ptr++ 이후: %d\n", ptr[0]);
}

int main() {
    int a[3] = {10,20,30};
    int *p = a;

    printf("[main 함수]\n");

    printf("a[0] = %d\n", a[0]);
    printf("p[0] = %d\n", p[0]);

    p++;
    //a++;


    printf("p++ 이후: %d\n",p[0]);
    printf("a[0] = %d\n" , a[0]);

    p = a;

    test(a,p);

    printf("\n[함수 호출 이후]\n");
    printf("a[0] = %d\n", a[0]);
    printf("p[0] = %d\n", p[0]);

    return 0;
}