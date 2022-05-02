/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 파일 생성 및 읽기

int main() {
	FILE* fp = NULL;
	fp = fopen("open1.txt", "w");
	if (fp == NULL) {
		puts("파일생성실패\n");
	}
	else {
		puts("파일생성성공\n");
	}
	fputc('h', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);

	fclose(fp);

	fp = fopen("open1.txt", "r");
	
	if (fp == NULL) {
		puts("파일읽기실패\n");
	}
	else {
		puts("파일읽기성공\n");
	}

	int i = 0;
	while ((i = fgetc(fp)) != EOF) {
		putchar(i);
	}

	fclose(fp);




	return 0;
}
*/