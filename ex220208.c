//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main() {
	/*			//19�� ���
	int dan;
	int i = 1;

	printf("����ϰ� ���� ��: ");
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
	
	/*				//1���� n������ ��
	int i, n, sum;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n) {
		sum += i;
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�\n", n, sum);
	*/

	/*				//���� ���� ������ ���� ���ϴ� ��
	int i, n, sum;

	i = 0;
	sum = 0;
	while (i < 5) {
		printf("���� �Է��Ͻÿ�: ");
		scanf_s("%d", &n);
		sum += n;
		i++;
	}
	printf("�հ�� %d�Դϴ�\n", sum);
	*/

	/*					//������ ����� ���ϴ� ��
	int n, grade;
	float sum, average;

	n = 0;
	sum = 0;
	grade = 0;

	printf("���� �� ���� �Է�\n");

	while (grade >= 0) {
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &grade);

		sum += grade;
		n++;

	}

	sum -= grade;
	n--;

	average = sum / n;
	printf("������ ����� %.2f�Դϴ�\n", average);
	*/

	/*
	int number, min_value = INT_MAX;
	printf("������ �Է��Ͻÿ�\n����� Ctrl+z+Enter 3ȸ �ݺ�\n");
	// scanf�� EOF�� ��� �� EOF���� 3�� ������� ����Ǵ� ����
	while (scanf_s("%d", &number) != EOF) {
		if (number < min_value) {
			min_value = number;
		}
	}
	printf("�ּҰ��� %d", min_value);
	*/

	/*				//do~while��
	int i = 0;

	do {
		printf("1---���� �����\n");
		printf("2---  ���� ����\n");
		printf("3---  ���� �ݱ�\n");
		printf("�ϳ��� �����ϼ���\n");
		scanf_s("%d", &i);
	} while (i < 1 || i > 3); {
		printf("���õ� �޴� = %d \n", i);
	}
	*/

	/*				//������
	int i, n;

	printf("������ �Է��Ͻÿ�\n");
	scanf_s("%d", &n);

	printf("============================\n");
	printf("1���� �Է��� �������� ������\n");
	printf("============================\n");

	for (i = 1; i <= n; i++) {
		printf("%5d    %5d\n", i, i * i * i);
	}
	*/
	
	/*				// !n ���ϱ� 
	long fact = 1;
	int i, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (i=1;i<=n;i++) {
		fact = fact * i;
	}
	printf("%d!�� %d�Դϴ�\n", n, fact);
	*/
	
	/*				//���ѹݺ�
    for (;;) {
	    printf("����!");
	}
	*/

	/*				��ø for������ *��ȣ�� �簢�� ������� ���
	int x, y;

	for (y = 0; y < 5; y++) {
		for (x = 0; x < 60; x++) {
			printf("*");
		}
		printf("\n");
	}
	*/

	/*			//�õ�Ӵϰ� 10�谡 �Ǹ� ��������
	const int SEED_MONEY = 1000000;
	int year = 0, money = SEED_MONEY;
	
	while (1) {
		year++;
		money += money *0.3;
		if (money > 10 * SEED_MONEY) {
			break;
		}
	}
	printf("%d�� ���� 10�� ���� â���: %d ��\n", year, money);
	*/

	/*				//continue�� ����
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