#include <stdio.h>

int main() {
	/*
	double x, y, result;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%lf %lf", &x, &y);
	result = x / y;
	printf("%.0lf / %.0lf = %.2lf\n", x, y, result);
	*/
	
	/*
	int input, minute, second;
	const int SEC_PER_MINUTE = 60;
	
	printf("�ʴ��� �Է�: ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;
	
	printf("%d�ʴ� %d�� %d���Դϴ�", input, minute, second);
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
	printf("x�� ��: %d\n", x);
	printf("++x: %d\n", ++x);
	printf("x: %d\n", x);

	printf("y�� ��: %d\n", y);
	printf("y++: %d\n", y++);
	printf("y�� ��: %d\n", y);
	*/

	/*
	int x, y;
	printf("x�� y �Է�: ");
	scanf_s("%d %d", &x, &y);

	printf("ū ��: %d\n", (x > y) ? x : y);
	printf("���� ��: %d\n", (x < y) ? x : y);
	*/

	/*
	int year, result;

	printf("���� �Է�: ");
	scanf_s("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	(result == 1) ? printf("%d���� �����Դϴ�", year) : printf("%d���� ������ �ƴմϴ�", year);
	// if () {}, else {}�� ���ǿ����ڷ� ����
	*/

	// ��Ʈ������
	/*
	int x = 9;				// 1001
	int y = 10;				// 1010

	printf("��Ʈ AND = %08x\n", x & y);		// 00001000
	printf("��Ʈ  OR = %08x\n", x | y);		// 00001011
	printf("��Ʈ XOR = %08x\n", x ^ y);		// 00000011
	printf("��Ʈ NOT = %08x\n", ~x);		// 11110110
	*/
	
	/*
	int x = 4;								// 0100
	printf("��Ʈ << = %#08x\n", x << 1);	// 1000
	printf("��Ʈ >> = %#08x\n", x >> 1);	// 0010
	*/

	/*		//�ȼ��̵�
	unsigned int color = 0x00380000;
	unsigned int result;

	printf("�ȼ��� ����: %#08x \n", color);
	result = color & 0x00ff0000;				//����ũ ����
	printf("����ũ ���� ��: %#08x \n", result);
	result = result >> 16;						//��Ʈ �̵� ����
	printf("���� �����: %#08x \n", result);
	*/

	/*
	char c;
	int i;
	float f;
	c = 10000;
	i = 1.23456 + 10;
	f = 10 + 20;
	printf("c = %d \ni = %d \nf = %f\n", c, i, f);	//�����Ϸ� �ڵ�����ȯ
	
	f = (float)i;									//���� ����ȯ
	i = (int)f;
	printf("f = %f\ni = %d\n", f, i);
	*/




	return 0;
}