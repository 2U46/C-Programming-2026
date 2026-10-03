#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc3(void) {
    int year;

    printf("연도를 입력하세요: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d년은 윤년입니다.\n", year);
    }
    else if (year % 100 == 0) {
        printf("%d년은 평년입니다.\n", year);
    }
    else if (year % 4 == 0) {
        printf("%d년은 윤년입니다.\n", year);
    }
    else {
        printf("%d년은 평년입니다.\n", year);
    }
}

int main(void) {
    exerc3();
    return 0;
}
