#include <stdio.h>
#include <limits.h>

void main() {
	
	//1.������ �ڷ��� ũ��
	/*
	short year = 0;
	int sale = 0;
	long total_sale = 0;
	
	year = 10;
	sale = 200000000;
	total_sale = year * sale;
	printf("�� �Ǹž�: %d", total_sale);
	*/

	//2.�����÷ο�
	/*
	short s_money = SHRT_MAX;				//�ִ밪���� (32767)
	unsigned short u_money = USHRT_MAX;		//�ִ밪���� (65535)

	s_money += 1;
	printf("s_money = %d\n", s_money);

	u_money += 1;
	printf("u_money = %d\n", u_money);
	*/

	//3.�������
	/*
	int x = 10;
	int y = 010;
	int z = 0x10;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);
	*/

	//4.��ȣ���
	//#define PI 3.141592
	/*
	const int MONTHS = 12;
	const double TAX = 0.2;

	int msalary, ysalary;

	printf("���� �Է�: ");
	scanf_s("%d", &msalary);

	ysalary = MONTHS * msalary;

	printf("����: %d\n", ysalary);
	printf("����: %lf\n", TAX * ysalary);
	*/

	//5.�ε��Ҽ���
	/*			
	float x = 0.1234567890123456789;
	double y = 0.1234567890123456789;

	printf("x = %30.20f\n", x);
	printf("y = %30.20lf\n", y);
	*/

	//6.��ȣ���
	/*
	char code1 = 'A';
	char code2 = 65;
	
	printf("code1: %c\n", code1);
	printf("code2: %c\n", code2);
	
	printf("code1: %d\n", code1);
	printf("code2: %d\n", code2);

	printf("code1: %c\n", code1+32);
	printf("code2: %c\n", code2+32);
	*/

	//�����
	/*
	char beep = '\a';
	printf("%c", beep);
	int id;
	printf("id: ");
	scanf_s("%d", &id);
	printf("id = \"%d\"\n", id);
	*/

}
