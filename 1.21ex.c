#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {
	/*
	//���� ����
	float r, area;
	float pie = 3.14159;
	
	printf("���� ������: ");
	scanf("%f", &r);
	
	area = pie * r * r;

	printf("���� ����: %.1f\n", area);
	*/

	/*
	//�ڷ����� ũ���Դϴ�
	int x = 0;
	printf("���� x�� ����Ʈ ��: %d\n", sizeof(x));
	printf("int���� ����Ʈ ��: %d\n", sizeof(int));
	printf("char���� ����Ʈ ��: %d\n", sizeof(char));
	printf("float���� ����Ʈ ��: %d\n", sizeof(float));
	printf("double���� ����Ʈ ��: %d\n", sizeof(double));
	printf("short���� ����Ʈ ��: %d\n", sizeof(short));
	printf("long���� ����Ʈ ��: %d\n", sizeof(long));
	*/
	
	/*
	//�����������Դϴ�
	int dollar;
	int won;
	float Rate = 1124.4;

	printf("�޷��Է�: ");
	scanf("%d", &dollar);
	

	won = Rate * dollar;
	printf("%d�޷��� %d���Դϴ�\n", dollar, won);
	*/

	//���ݱ��ϴ� ���α׷��Դϴ�
	int msalary = 0;
	float tax = 0;
	float TAX_RATE = 0.2;

	printf("����: ");
	scanf("%d", &msalary);
	tax = TAX_RATE * msalary;
	printf("�̹��� ����: %.0f\n", tax);





}