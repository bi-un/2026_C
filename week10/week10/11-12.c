#include <stdio.h>

int main() {
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];

    char ch = 'p';
    int n = 3;

    //str1의 길이를 계산하기 위한 strlen
    int len = strlen(str1);
    printf("str의 길이: %d\n", len);

    strcpy(str3,str1);
    printf("str1을 str3에 복사: %s\n",str3);

    strncpy(str3,str2,n);
    str3[n] = '\0';
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

    printf("str1과 str2 비교: %d\n", strcmp(str1, str2));

    printf("str1과 str2의 첫 %d 문자 비교: %d\n",n, strcmp(str1, str2, n));

    strcat(str1, str2);
    printf("str2를 str1에 연결: %s\n", str1);

    strcat(str3, str1);
    printf("str1의 첫 %d 문자를 str3에 연결: %s\n",n, str3);

    char*ptr_ch = strstr(str1, ch);
    printf("str1에서 '%c'의 첫 번쨰 출현: %s\n", ch, ptr_ch);

    char*ptr_str = strstr(str1, str2);
    printf("str1에서 str2의 첫 번쨰 출현: %s\n",ptr_str ? ptr_str : "찾을 수 없음");

    return 0;

}