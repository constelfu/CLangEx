#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define WORDS 5

void main() {
	/*
	char s1[30];
	char s2[30];
	int result;
	printf("s1: ");
	scanf("%s", s1);
	printf("s2: ");
	scanf("%s", s2);
	result = strcmp(s1, s2);
	if (result == 0) {
		printf("같은 글자입니다\n");
	}
	else if (result < 0) {
		printf("%s가 %s보다 앞에 있습니다\n", s1, s2);
	}
	else {
		printf("%s가 %s보다 뒤에 있습니다\n", s1, s2);
	}
	*/

	/*
	int i;
	char fruits[3][30];
	for (i = 0; i < 3; i++) {
		printf("과일 이름 입력: ");
		scanf("%s", fruits[i]);
		
	}
	for (i = 0; i < 3; i++) {
		printf("%d번째 과일: %s\n", i, fruits[i]);
	}
	*/

	/*
	int i;
	char dic[WORDS][2][20] = {
		{"book", "책"},
		{"boy", "소년"},
		{"computer", "컴퓨터"},
		{"language", "언어"},
		{"rain", "비"}
	};
	char word[30];
	printf("찾는 단어 입력: ");
	scanf("%s", word);

	for (i = 0; i < WORDS; i++) {
		if (strcmp(dic[i][0], word) == 0) {
			printf("%s:%s\n", word, dic[i][1]);
		}
	}
	*/

	/*
	char s1[] = "100 200 300";
	char s2[10];
	int value;
	sscanf(s1, "%d", &value);
	printf("value = %d\n", value);
	sprintf(s2, "%d", value);
	printf("s2 = %s\n", s2);
	*/

	char s1[] = "100";
	char s2[] = "12.93";
	char buffer[20];
	int i;
	double d, result;

	i = atoi(s1);
	d = atof(s2);
	result = i + d;
	sprintf(buffer, "%f", result);
	printf("result = %s\n", buffer);

}