#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*		//���� �˰���
	int big, small, temp;

	printf("ù��° ��: ");
	scanf_s("%d", &big);
	printf("�ι�° ��: ");
	scanf_s("%d", &small);

	if (big < small) {
		temp = big;
		big = small;
		small = temp;
	}
	temp = 0;
	printf("ū �� = %d\n���� �� = %d", big, small);
	*/

	/*
	int big =0, small = 0;
	int a, b;

	printf("ù��° ��: ");
	scanf_s("%d", &a);
	printf("�ι�° ��: ");
	scanf_s("%d", &b);

	if (a > b) {
		big = a;
		small = b;
	}
	else if (a < b) {
		big = b;
		small = a;
	}
	else {
		printf("\n���� ���Դϴ�\n");
		return 0;
	}
	
	printf("ū �� = %d\n���� �� = %d", big, small);
	*/
	
	/*
	int x;

	printf("���� �Է�: ");
	scanf_s("%d", &x);

	if (x > 0) {
		printf("%d -> ���\n\n\n", x);
	} else {
		printf("%d -> ����\n\n\n", x);
	}

	printf("�Է��Ͻ� ���� %d�Դϴ�\n\n\n", x);
	*/

	/*
	int score;

	printf("���� �Է�: ");
	scanf_s("%d", &score);
	
	if (score >= 60) {
		if (score >= 90) {
			printf("A����\n\n");
		}
		else if (score >= 80) {
			printf("B����\n\n");
		} 
		else if (score >= 70) {
			printf("C����\n\n");
		}
		else {
			printf("D����\n\n");
		}
	}
	else {
		printf("F����\n");
	}
	*/

	/*
	int x;
	
	printf("����: ");
	scanf_s("%d", &x);
	
	if (x == 0) {
		printf("0��\n");
	}
	else if (x > 0) {
		printf("���\n");
	}
	else {
		printf("����\n");
	}
	*/

	/*				//scanf_s�� ���� ���� ������ �Է¹��� ��
					//ǥ���Է¹��ۿ� �ܿ����ڰ� ���� �Ǿ� ������ �߻��Ѵ�
					//�׷� �� scanf �Է� �� rewind(stdio)�Լ��� ����Ͽ�
					//�ܿ����ڸ� ����� �״��� scanf�� ó���ϵ��� �Ѵ�
	int age, fee;
	char local;
	fee = 10000;
	
	printf("����: ");
	scanf_s("%d", &age);
	rewind(stdin);
	printf("�����ֹ� ����(y/n):");
	scanf_s("%c", &local, 1);

	if (age >= 60) {
		fee -= 5000;
	}
	
	if (local == 'y') {
		fee -= 5000;
		}

	printf("���: %d", fee);
	*/
	

	return 0;
}