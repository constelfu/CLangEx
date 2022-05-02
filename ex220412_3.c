/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 텍스트 파일 내에서 단어 검색
int main() {
	FILE* fp = NULL;


	char filename[20], buffer[100], word[10];
	int line = 0;
	printf("파일 이름 입력: ");
	scanf("%s", filename);
	printf("검색어 입력: ");
	scanf("%s", word);

	if ((fp = fopen(filename, "r")) == NULL) {
		puts("파일 열기 실패\n");
		exit(1);
	}
	else {
		puts("파일 읽기 성공\n");
	}

	while (fgets(buffer, 100, fp)) {
		line++;
		if (strstr(buffer, word)) {
			printf("%s 파일의 %d번째 줄에서 단어 %s발견됨\n",
				filename, line, word);
		}
	}


	return 0;
}
*/