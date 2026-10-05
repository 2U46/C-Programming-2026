#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc1(void) {
    int grade = 0;

    printf("학년을 입력하세요 : ");

    if (scanf("%d", &grade) != 1) {
        return;
    }

    switch (grade) {
    case 1:
        printf("1학년입니다.\n");
        break;
    case 2:
        printf("2학년입니다.\n");
        break;
    case 3:
        printf("3학년입니다.\n");
        break;
    default:
        printf("잘못된 값을 입력함\n");
        break;
    }
}

int isleafyear(int year) {
    int isleaf = 0;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isleaf = 1;
            }
        }
        else {
            isleaf = 1;
        }
    }
    return isleaf;
}
void exerc2(void) {
    int month;
    int days;
    printf("월 입력(1~12) : ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) {
        int year;
        switch (month) {
        case 2:
            printf("input year :");
            scanf("%d", &year);
            if (isleafyear(year) == 1) days = 29;
            else days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
        }
        printf("%d월은 %d일까지 있습니다.\n", month, days);
    }
    else {
        printf("1부터 12사이의 값을 입력하세요.\n");
    }
}

int main(void) {

    exerc1();
    exerc2();

    return 0;
}
