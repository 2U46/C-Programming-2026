#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assi1(void) {
    int midterm, final, assignment;
    double weighted_score;

    scanf("%d %d %d", &midterm, &final, &assignment);
    weighted_score = (midterm * 0.3) + (final * 0.4) + (assignment * 0.3);
    printf("weighted_score=%.2f\n", weighted_score);
}
void assi2(void) {
    double height, weight;
    double bmi;

    scanf("%lf %lf", &height, &weight);
    bmi = weight / (height * height);
    printf("bmi=%.2f\n", bmi);
}
int main(void) {
    assi1();
    assi2();

    return 0;
}