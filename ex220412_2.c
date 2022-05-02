/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 텍스트 파일 내용 복사

int main() {
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	
	char file1[30], file2[30], buffer[50];
	printf("원본 파일 이름 입력: ");
	scanf("%s", file1);
	printf("복사 파일 이름 입력: ");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL) {
		puts("파일 열기 실패\n");
		exit(1);
	}
	else {
		puts("파일 읽기 성공\n");
	}

	if ((fp2 = fopen(file2, "w")) == NULL) {
		puts("파일 생성 실패\n");
		exit(1);
	}
	else {
		puts("파일 생성 성공\n");
	}

	while (fgets(buffer, 50, fp1) != NULL) {
		fputs(buffer, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
*/