#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
	/*
	int c;
	
	printf("�빮�� �ҹ��� �˻�: \n");
	while ((c = getchar()) != EOF) {
		if (islower(c)) {
			printf("%c : �ҹ���\n", c);
		}
		else if (isupper(c)) {
			printf("%c : �빮��\n", c);
		}
	}
	*/
	/*
	printf("�빮�� ��ȯ: \n");
	while ((c = getchar()) != EOF) {
		if (islower(c)) {
			c = toupper(c);
		}
		putchar(c);
	}

	printf("\n\n\n");
	*/
	
	/*
	char s1[10] = "world";		
	char s2[20] = "hello ";			
	
	strcat(s2, s1);
	printf("src = %s \n", s1);
	printf("dst = %s \n", s2);

	printf("%d\n", strlen(s1));		// �ι��� ���� ��
	printf("%d\n", strlen(s2));
	printf("%d\n", strlen("hello"));
	*/

	/*
	char s1[10] = "world";
	char s2[20] = "hello ";

	if (strcmp(s2, s1) == 0) {
		printf("������ �迭\n");
	}
	else {
		printf("�ٸ� �迭\n");
	}
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	*/

	/*
	char s1[10] = "100";
	char s2[20] = "12.9";
	int num1;
	double num2, result;
	
	num1 = atoi(s1);
	num2 = atof(s2);
	result = num1 + num2;
	
	printf("%d + %.2f = %.2f\n", num1, num2, result);
	*/

	/*
	int i;
	char menu[5][10] = {
		"init",
		"open",
		"close",
		"read",
		"write"
	};

	for (int i = 0; i < 5; i++) {
		printf("%d��° �޴�: %s\n", i+1, menu[i]);
	}
	*/

	char s1[30] = "The Little Prince";
	char* ptr = strtok(s1, " ");

	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}
	



	return 0;
}