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
	printf("점수 3개 입력: ");
	int a, b, c;
	scanf_s("%d %o %x", &a, &b, &c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	*/

	/*
	printf("입력: ");
	int a, b;
	scanf_s("%c %c", &a, &b);
	printf("a = %c, b = %c\n", a, b);
	*/

	/*
	int x, y, z;
	printf("리턴 개수 확인\n");
	if (scanf("%d%d%d", &x, &y, &z) == 3) {
		printf("sum = %d\n", x + y + z);
	}
	else {
		printf("입력값이 오류입니다.\n");
	}
	*/

	/*	
	char ch;
	while (1) {
		scanf("%c", &ch);
		fflush(stdin);			// 버퍼를 비워냄
		printf("%c", ch);
	}
	*/

	FILE* fp = NULL;
	char fname[30];
	printf("파일이름 입력: ");
	scanf("%s", fname);

	fp = fopen(fname, "w");
	if (fp == NULL) {
		printf("파일생성 실패\n");
	}
	else {
		printf("파일생성 성공\n");
	}

	fclose(fp);

	return 0;
}