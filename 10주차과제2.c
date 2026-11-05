#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main() {
	int number[SIZE];
	int most;
	int temp;

	printf("%d개의 숫자를 입력하세요:\n", SIZE);
	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &number[i]);
	}

	for (int i = 0; i < SIZE - 1; i++) {
		most = i;
		for (int j = i + 1; j < SIZE; j++) {
			if (number[most] < number[j]) most = j;
		}
		temp = number[i];
		number[i] = number[most];
		number[most] = temp;
	}

	printf("\n--- 내림차순 정렬 결과 ---\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%5d\t", number[i]);
		if ((i + 1) % 10 == 0) printf("\n");
	}

	return 0;
}
