#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc1(void){

	double inch, cm;
    scanf("%lf", &inch);
    cm = inch * 2.54;
    printf("%lf inch는 %lf cm입니다.\n", inch, cm);

}
void exerc2(void) {

	double F, C;
	scanf("%lf", &C);
	F = (C * 1.8) + 32;
	printf("섭씨 %lf도는 화씨 %lf도입니다.", C, F);
}
void exerc3(void) {

	double r, area;
	scanf("%lf", &r);
	area = r * r * 3.14;
	printf("반지름 %lf인 원의 넓이는 %lf입니다.", r, area);
}
void exerc4(void) {

	int total, hours, minutes, seconds;
	scanf("%d", &total);
	hours = total / 3600;
	minutes = (total % 3600) / 60;
	seconds = total % 60;
	printf("%d시간 %d분 %d초", hours, minutes, seconds);
}
void exerc5(void) {
	float score;
	float attendance;
	int passed;

	scanf("%f %f", &score, &attendance);
	passed = (score >= 60.0) && (attendance >= 80.0);
	printf("%d\n", passed);
}
#define READ  0x01
#define WRITE 0x02
#define EXEC  0x04

int exerc6(void) {
	unsigned int permission = READ | WRITE;
	permission |= EXEC;
}
int exerc7(void) {
	int amount;
	scanf("%d", &amount);

	int won10000 = amount / 10000;
	amount %= 10000;
	int won1000 = amount / 1000;
	amount %= 1000;
	int won100 = amount / 100;
	amount %= 100;
	int won10 = amount / 10;

	printf("10000:%d 1000:%d 100:%d 10:%d\n", won10000, won1000, won100, won10);
}
int exerc8(void) {
	int year;
    int condition1;
	int condition2;
	int condition3;
	int isLeapYear;

	printf("연도를 입력하세요: ");
	scanf("%d", &year);

	condition1 = (year % 4 == 0);
	condition2 = (year % 100 == 0);
	condition3 = (year % 400 == 0);

	isLeapYear = (condition1 && !condition2) || condition3;
	printf("%d\n", isLeapYear);
}

	int main() {
	exerc1();
	exerc2();
	exerc3();
	exerc4();
	exerc5();
	exerc6();
	exerc7();
	exerc8();

	return 0;
}