/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� ���� �� �б�

int main() {
	FILE* fp = NULL;
	fp = fopen("open1.txt", "w");
	if (fp == NULL) {
		puts("���ϻ�������\n");
	}
	else {
		puts("���ϻ�������\n");
	}
	fputc('h', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);

	fclose(fp);

	fp = fopen("open1.txt", "r");
	
	if (fp == NULL) {
		puts("�����б����\n");
	}
	else {
		puts("�����б⼺��\n");
	}

	int i = 0;
	while ((i = fgetc(fp)) != EOF) {
		putchar(i);
	}

	fclose(fp);




	return 0;
}
*/