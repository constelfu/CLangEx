/*
printf()�� scanf() ����
*/
/*�ؽ�Ʈ Ŭ�� �� ����Ŭ���ż� ���̿� �ؽ�Ʈ�� �߰��ؾ� �Ǵµ�
* �ؽ�Ʈ�� ��ü�Ǵ� ���� ���� ��� insertŰ 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	//ȯ�����
	double rate;
	double usd;
	int krw;

	printf("�޷��� ���� ��ȭ ȯ���� �Է��Ͻÿ�: ");
	scanf("%lf", &rate);

	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("��ȭ %d���� %lf�޷��Դϴ�.\n", krw, usd);
	
	
	/*		//����,�Ǽ�
	int a = 123;
	printf("%d\n", a);
	printf("%5d\n", a);
	printf("%-5d\n", a);
	printf("%05d\n", a);

	printf("---------------\n");

	double b = 123.12345678;
	printf("%lf\n", b);
	printf("%12lf\n", b);
	printf("%12.3lf\n", b);
	printf("%.3lf\n", b);
	*/

	/*		//����
	char ch = 'A';
	printf("%c\n", ch);
	printf("%5c\n", ch);
	printf("%-5c\n", ch);
	*/

	/*		//���ڿ� (���ڿ��� ���� �ڿ� �ι��ڰ� ���Ե�����)
	char*str = "C program";
	printf("%s\n", str);
	printf("%20s\n", str);
	printf("%-20s\n", str);
	printf("%5s\n", str);
	printf("%10.5s\n", str);
	*/

	/*		//scanf()�Լ������Դϴ�
	int a;
	float b;
	printf("a= ");
	scanf("%d", &a);
	printf("�Է¹��� a=%d\n", a);

	printf("b= ");
	scanf("%f", &b);
	printf("�Է¹��� b=%.4f\n", b);
	*/

	/*		//����� ��� ���α׷�
	int salary;
	int deposit;
	printf("���� �Է��ϼ���: ");
	scanf("%d", &salary);
	deposit = 10 * salary * 12;
	printf("10�� ������ �����: %d����\n", deposit);
	*/

	/*		//���� ���� ���
	float radius;
	float area;
	printf("������: ");
	scanf("%f", &radius);
	area = radius * radius * 3.14;
	printf("���� ���� = %.4f\n", area);
	*/

}