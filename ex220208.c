//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main() {
	/*			//19단 출력
	int dan;
	int i = 1;

	printf("출력하고 싶은 단: ");
	scanf_s("%d", &dan);

	while (i <= 19) {
		printf("%d X %d = %d \n", dan, i, dan * i);
		i++;
	}
	printf("========================\n");
	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d \n", dan, i, dan * i);
	}
	printf("========================\n");
	for (dan = 2; dan < 20; dan++) {
		for (i = 1; i < 20; i++) {
			printf("%d * %d = %d\n", dan, i, dan * i);
		}
	}
	*/
	
	/*				//1부터 n까지의 합
	int i, n, sum;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n) {
		sum += i;
		i++;
	}

	printf("1부터 %d까지의 합은 %d입니다\n", n, sum);
	*/

	/*				//여러 개의 정수의 합을 구하는 것
	int i, n, sum;

	i = 0;
	sum = 0;
	while (i < 5) {
		printf("값을 입력하시오: ");
		scanf_s("%d", &n);
		sum += n;
		i++;
	}
	printf("합계는 %d입니다\n", sum);
	*/

	/*					//성적의 평균을 구하는 것
	int n, grade;
	float sum, average;

	n = 0;
	sum = 0;
	grade = 0;

	printf("종료 시 음수 입력\n");

	while (grade >= 0) {
		printf("성적을 입력하시오: ");
		scanf_s("%d", &grade);

		sum += grade;
		n++;

	}

	sum -= grade;
	n--;

	average = sum / n;
	printf("성적의 평균은 %.2f입니다\n", average);
	*/

	/*
	int number, min_value = INT_MAX;
	printf("정수를 입력하시오\n종료는 Ctrl+z+Enter 3회 반복\n");
	// scanf와 EOF를 사용 시 EOF값을 3번 줘야지만 종료되는 문제
	while (scanf_s("%d", &number) != EOF) {
		if (number < min_value) {
			min_value = number;
		}
	}
	printf("최소값은 %d", min_value);
	*/

	/*				//do~while문
	int i = 0;

	do {
		printf("1---새로 만들기\n");
		printf("2---  파일 열기\n");
		printf("3---  파일 닫기\n");
		printf("하나를 선택하세요\n");
		scanf_s("%d", &i);
	} while (i < 1 || i > 3); {
		printf("선택된 메뉴 = %d \n", i);
	}
	*/

	/*				//세제곱
	int i, n;

	printf("정수를 입력하시오\n");
	scanf_s("%d", &n);

	printf("============================\n");
	printf("1부터 입력한 값까지의 세제곱\n");
	printf("============================\n");

	for (i = 1; i <= n; i++) {
		printf("%5d    %5d\n", i, i * i * i);
	}
	*/
	
	/*				// !n 구하기 
	long fact = 1;
	int i, n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	for (i=1;i<=n;i++) {
		fact = fact * i;
	}
	printf("%d!는 %d입니다\n", n, fact);
	*/
	
	/*				//무한반복
    for (;;) {
	    printf("랄로!");
	}
	*/

	/*				중첩 for문으로 *기호를 사각형 모양으로 찍기
	int x, y;

	for (y = 0; y < 5; y++) {
		for (x = 0; x < 60; x++) {
			printf("*");
		}
		printf("\n");
	}
	*/

	/*			//시드머니가 10배가 되면 빠져나옴
	const int SEED_MONEY = 1000000;
	int year = 0, money = SEED_MONEY;
	
	while (1) {
		year++;
		money += money *0.3;
		if (money > 10 * SEED_MONEY) {
			break;
		}
	}
	printf("%d년 만에 10배 수익 창출됨: %d 원\n", year, money);
	*/

	/*				//continue문 예제
	int i;
	for (i = 0; i < 10; i++) {
		if (i % 3 == 0) {
			continue;
		}
		printf("%d", i);
	}
	*/

	return 0;
}