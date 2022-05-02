/*
10진수, 8진수, 16진수 예제
*/
//#define EX_RATE 1100
#include <stdio.h>

void main() {
	/*
	int x = 10;		//10진수
	//int y = 010;	//8진수
	//int z = 0x10;	//16진수

	printf("%d = %d(%d)\n", x, x, 10);
	printf("%d = %o(%d)\n", x, x, 8);
	printf("%d = %x(%d)\n", x, x, 16);
	*/

	/*
	const int EX_RATE = 1520;

	int dollar1 = 10;
	int dollar2 = 100;
	int dollar3 = 1000;

	int won1 = EX_RATE * dollar1;
	int won2 = EX_RATE * dollar2;
	int won3 = EX_RATE * dollar3;

	printf("%d달러는 %d원입니다\n", won1, dollar1);
	printf("%d달러는 %d원입니다\n", won2, dollar2);
	printf("%d달러는 %d원입니다\n", won3, dollar3);
	*/

	int x = 0;

	printf("변수 x의 크기; %d\n", sizeof(x));
	printf("char형의 크기; %d\n", sizeof(char));
	printf("int형의 크기; %d\n", sizeof(int));
	printf("short형의 크기; %d\n", sizeof(short));
	printf("long형의 크기; %d\n", sizeof(long));
	printf("float형의 크기; %d\n", sizeof(float));
	printf("double형의 크기; %d\n", sizeof(double));



}