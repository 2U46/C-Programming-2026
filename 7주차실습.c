#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void exerc1(void) {
    int score;
    int count = 0;
    int sum = 0;

    while (1) {
        scanf("%d", &score);

        if (score == -1) {
            break;
        }

        if (score < 0 || score > 100) {
            printf("오류\n");
            continue;
        }

        sum += score;
        count++;

        if (count == 3) {
            break;
        }
    }

    if (count == 0) {
        printf("입력된 점수가 없습니다.\n");
    }
    else {
        printf("%d개, 평균 %.2f\n", count, (double)sum / count);
    }

}


void exerc2(void) {
    int num;
    int prev_num = -1;
    int consecutive = 0;
    int total_count = 0;

    while (1) {
        scanf("%d", &num);
        total_count++;

        if (num == prev_num) {
            consecutive++;
        }
        else {
            consecutive = 1;
            prev_num = num;
        }

        if (consecutive == 3) {
            break;
        }
    }

    printf("숫자 %d가 3번 연속 -> 전체 %d회\n", prev_num, total_count);

}


void exerc3(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            }
            else {
                printf(" ");
            }

        }
        printf("\n");
    }

}


int main(void) {
    exerc1();
    exerc2();
    exerc3();

    return 0;
}