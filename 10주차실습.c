#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main() {
    int number[SIZE];
    int max, min;
    int sum = 0;
    double avg;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < SIZE; i++) {
        number[i] = rand() % 101;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("학생 %2d: %3d점\n", i + 1, number[i]);
    }
    printf("\n");

    max = number[0];
    min = number[0];
    sum = number[0];

    for (int i = 1; i < SIZE; i++) {
        if (number[i] > max) max = number[i];
        if (number[i] < min) min = number[i];
        sum += number[i];
    }

    avg = (double)sum / SIZE;

    printf("최댓값: %d점\n", max);
    printf("최솟값: %d점\n", min);
    printf("평균값: %.2f점\n", avg);

    return 0;
}
