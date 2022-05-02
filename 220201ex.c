#include <stdio.h>

int main() {
	/*
	double x, y, result;
	printf("두 개의 정수 입력: ");
	scanf_s("%lf %lf", &x, &y);
	result = x / y;
	printf("%.0lf / %.0lf = %.2lf\n", x, y, result);
	*/
	
	/*
	int input, minute, second;
	const int SEC_PER_MINUTE = 60;
	
	printf("초단위 입력: ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;
	
	printf("%d초는 %d분 %d초입니다", input, minute, second);
	*/

	/*
	int x, y;
	x = 1;
	printf("x + 1: %d\n", x + 1);
	printf("x: %d\n", x);
	
	printf("y = x + 1: %d\n", y = x + 1);
	printf("y = 10 + (x = 2 + 7): %d\n", y = 10 + (x = 2 + 7));
	printf("y = x = 3: %d\n", y = x = 3);
	*/

	/*
	int x = 10, y = 10;
	printf("x의 값: %d\n", x);
	printf("++x: %d\n", ++x);
	printf("x: %d\n", x);

	printf("y의 값: %d\n", y);
	printf("y++: %d\n", y++);
	printf("y의 값: %d\n", y);
	*/

	/*
	int x, y;
	printf("x와 y 입력: ");
	scanf_s("%d %d", &x, &y);

	printf("큰 수: %d\n", (x > y) ? x : y);
	printf("작은 수: %d\n", (x < y) ? x : y);
	*/

	/*
	int year, result;

	printf("연도 입력: ");
	scanf_s("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	(result == 1) ? printf("%d년은 윤년입니다", year) : printf("%d년은 윤년이 아닙니다", year);
	// if () {}, else {}를 조건연산자로 압축
	*/

	// 비트연산자
	/*
	int x = 9;				// 1001
	int y = 10;				// 1010

	printf("비트 AND = %08x\n", x & y);		// 00001000
	printf("비트  OR = %08x\n", x | y);		// 00001011
	printf("비트 XOR = %08x\n", x ^ y);		// 00000011
	printf("비트 NOT = %08x\n", ~x);		// 11110110
	*/
	
	/*
	int x = 4;								// 0100
	printf("비트 << = %#08x\n", x << 1);	// 1000
	printf("비트 >> = %#08x\n", x >> 1);	// 0010
	*/

	/*		//픽셀이동
	unsigned int color = 0x00380000;
	unsigned int result;

	printf("픽셀의 색상: %#08x \n", color);
	result = color & 0x00ff0000;				//마스크 연산
	printf("마스크 연산 후: %#08x \n", result);
	result = result >> 16;						//비트 이동 연산
	printf("최종 결과값: %#08x \n", result);
	*/

	/*
	char c;
	int i;
	float f;
	c = 10000;
	i = 1.23456 + 10;
	f = 10 + 20;
	printf("c = %d \ni = %d \nf = %f\n", c, i, f);	//컴파일러 자동형변환
	
	f = (float)i;									//강제 형변환
	i = (int)f;
	printf("f = %f\ni = %d\n", f, i);
	*/




	return 0;
}