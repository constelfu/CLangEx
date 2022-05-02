/*
#include <stdio.h>
#define MAX 100
#define MIN 5
#define PI 3.14159

double area(double r);
double around(double r);


#include "my.h"
void main() {
	puts("=======include지시자\n");
	test();
}


void main() {
	int num;
	printf("num>> ");
	scanf_s("%d", &num);
	if (num == MAX) {
		puts("max값과 같습니다.\n");
	}
	else if (num == MIN) {
		puts(" min값과 같습니다.\n");
	}
	else {
		printf("다시 입력바람\n");
	}
}


void main() {
	double r;
	printf("반지름: ");
	scanf_s("%lf", &r);
	double result = area(r);
	printf("면적 = %lf\n", result);
	result = around(r);
	printf("둘레 = %lf\n", result);

}

double area(double r) {
	return PI * r * r;
}
double around(double r) {
	return PI * r * 2;
}
*/