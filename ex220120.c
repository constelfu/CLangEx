/*
10����, 8����, 16���� ����
*/
//#define EX_RATE 1100
#include <stdio.h>

void main() {
	/*
	int x = 10;		//10����
	//int y = 010;	//8����
	//int z = 0x10;	//16����

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

	printf("%d�޷��� %d���Դϴ�\n", won1, dollar1);
	printf("%d�޷��� %d���Դϴ�\n", won2, dollar2);
	printf("%d�޷��� %d���Դϴ�\n", won3, dollar3);
	*/

	int x = 0;

	printf("���� x�� ũ��; %d\n", sizeof(x));
	printf("char���� ũ��; %d\n", sizeof(char));
	printf("int���� ũ��; %d\n", sizeof(int));
	printf("short���� ũ��; %d\n", sizeof(short));
	printf("long���� ũ��; %d\n", sizeof(long));
	printf("float���� ũ��; %d\n", sizeof(float));
	printf("double���� ũ��; %d\n", sizeof(double));



}