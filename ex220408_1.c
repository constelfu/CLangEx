#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	printf("1234567890\n==============\n");
	printf("%d\n", 123);
	printf("% d\n", 123);
	printf("%+d\n", 123);
	printf("%d\n", +123);
	printf("%d\n", -123);
	printf("%10d\n", 123);
	printf("%-10d\n", 123);
	printf("%f\n", 1.234567);
	printf("%10f\n", 1.234567);
	printf("%10.3f\n", 1.234567);
	printf("%-10.3f\n", 1.234567);

	printf("%s\n", "abc");
	printf("%10s\n", "abc");
	printf("%-10s\n", "abc");

	printf("%10e\n", 1.23456789);
	printf("%10.3e\n", 1.23456789);
	printf("%-10.3e\n", 1.23456789);

	printf("%x\n", 0x10);
	printf("%#x\n", 0x10);
	*/

	/*
	printf("���� 3�� �Է�: ");
	int a, b, c;
	scanf_s("%d %o %x", &a, &b, &c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	*/

	/*
	printf("�Է�: ");
	int a, b;
	scanf_s("%c %c", &a, &b);
	printf("a = %c, b = %c\n", a, b);
	*/

	/*
	int x, y, z;
	printf("���� ���� Ȯ��\n");
	if (scanf("%d%d%d", &x, &y, &z) == 3) {
		printf("sum = %d\n", x + y + z);
	}
	else {
		printf("�Է°��� �����Դϴ�.\n");
	}
	*/

	/*	
	char ch;
	while (1) {
		scanf("%c", &ch);
		fflush(stdin);			// ���۸� �����
		printf("%c", ch);
	}
	*/

	FILE* fp = NULL;
	char fname[30];
	printf("�����̸� �Է�: ");
	scanf("%s", fname);

	fp = fopen(fname, "w");
	if (fp == NULL) {
		printf("���ϻ��� ����\n");
	}
	else {
		printf("���ϻ��� ����\n");
	}

	fclose(fp);

	return 0;
}