#include <stdio.h>

int main() {
	
	/*			// input_number���� 1���� 1�� �����Ͽ� ����
	int i, hdr = 0, value = 0, value2 = 0;
	int input_number;

	printf("���� �Է�: ");
	scanf_s("%d", &input_number);

	for (i = 1; i <= input_number; i++) {
		hdr += i;
		printf("������ �� = %d\n", hdr);

	}

	printf("���� = %d\n", hdr);
	*/

	/*
	printf("���� �Է�: ");
	scanf_s("%d", &input_number);

	for (i = 1; i <= input_number; i++) {
		value = i + hdr;
		value2 += value;
		hdr -= 1;
		
		printf("������ �� = %d\n", value2);
	}

	printf("���� = %d\n", value2);
	*/

	/*
	int number;
	int max = 10;
	int min = 1;

	printf("���ڸ� �Է����ּ���: ");
	scanf_s("%d", &number);
	/*

	/*
	if (number > max) {
		printf("%d�� max���� ū ���Դϴ�\n", number);
	}
	else {
		printf("%d�� max���� ���� ���Դϴ�\n", number);
	}
	*/

	/*
	if (number < min) {
		printf("%d�� min���� ���� ���Դϴ�", number);
	}
	else {
		printf("min���� ū ���Դϴ�");
	}
	*/

	/*
	int score;
	printf("�����Է�: ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("A");
	}
	else if (score >= 80) {
		printf("B");
	}
	else if (score >= 70) {
		printf("C");
	}
	else if (score >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
	*/

	/*
	int x, y, result = 0;
	char op;
	printf("2+5 �������� �Է�: ");
	scanf_s("%d %c %d", &x, &op, 1, &y);
	*/

	/*
	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '/')
		result = x / y;
	else if (op == '*')
		result = x * y;
	else
		printf("�߸��� �������Դϴ�");
	*/

	/*
	switch (op) {
	case '+': result = x + y; break;
	case '-': result = x - y; break;
	case '*': result = x * y; break;
	case '/': result = x / y; break;
	default: printf("�߸��� �������Դϴ�");
	}	//switch end

	printf("%d %c %d = %d", x, op, y, result);
	*/

	/*
	char ch;
	printf("����: ");
	scanf_s("%c", &ch, 1);
	
	if (ch >= 'A' && ch <= 'Z') {
		printf("%c�� �빮���Դϴ�", ch);
	}
	else if (ch >= 'a' && ch <= 'z') {
		printf("%c�� �ҹ����Դϴ�", ch);
	}
	else if (ch >= '0' && ch <= '9') {
		printf("%c�� �����Դϴ�", ch);
	}
	else {
		printf("%c�� ��Ÿ�����Դϴ�", ch);
	}
	*/
	
	/*
	int number;
	printf("�ѹ�: ");
	scanf_s("%d", &number);
	
	switch (number) {
	case 0: printf("����"); break;
	case 1: printf("�ϳ�");				// break�� �� �� ��� �״��� �������� �Ѿ��
	case 2: printf("��"); break;		// break�� ���� ������ �����Ѵ�
	default: printf("�׿�"); break;
	}
	*/
	

	/*				//���� ��¥ ����	if �� �ȿ� switch�� �־ �߸��� �� ����
	int month;
	
	printf("�� ������ �Է�: ");
	scanf_s("%d", &month);

	if (month > 12) {
		printf("�Է��� �߸��Ǿ����ϴ�\n");
	}
	else {
		switch (month) {
		case 2: printf("2���� 28���Դϴ�"); break;
		case 4:
		case 6:
		case 9:
		case 11: printf("%d���� 30���Դϴ�", month); break;
		default: printf("%d���� 31���Դϴ�", month); break;

		}
	}
	*/
	
	
	


	return 0;
}