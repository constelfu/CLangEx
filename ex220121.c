#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {
	/*
	//원의 면적
	float r, area;
	float pie = 3.14159;
	
	printf("원의 반지름: ");
	scanf("%f", &r);
	
	area = pie * r * r;

	printf("원의 면적: %.1f\n", area);
	*/

	/*
	//자료형의 크기입니다
	int x = 0;
	printf("변수 x의 바이트 수: %d\n", sizeof(x));
	printf("int형의 바이트 수: %d\n", sizeof(int));
	printf("char형의 바이트 수: %d\n", sizeof(char));
	printf("float형의 바이트 수: %d\n", sizeof(float));
	printf("double형의 바이트 수: %d\n", sizeof(double));
	printf("short형의 바이트 수: %d\n", sizeof(short));
	printf("long형의 바이트 수: %d\n", sizeof(long));
	*/
	
	/*
	//변수선언예제입니다
	int dollar;
	int won;
	float Rate = 1124.4;

	printf("달러입력: ");
	scanf("%d", &dollar);
	

	won = Rate * dollar;
	printf("%d달러는 %d원입니다\n", dollar, won);
	*/

	//세금구하는 프로그램입니다
	int msalary = 0;
	float tax = 0;
	float TAX_RATE = 0.2;

	printf("월급: ");
	scanf("%d", &msalary);
	tax = TAX_RATE * msalary;
	printf("이번달 세액: %.0f\n", tax);





}