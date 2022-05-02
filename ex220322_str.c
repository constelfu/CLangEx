#include <stdio.h>

void main() {
	/*
	int i = 0;
	char str[5];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	str[4] = 'd';
	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}
	printf("\n%s", str);
	char str1[4] = "abcdefg";		//에러
	printf("\n%s", str1);
	*/

	/*
	char str1[6] = "seoul";  //5자 + 널문자
	char str2[3] = { 'i', 's', '\0' };
	char str3[] = "the city of korea";
	printf("%s %s %s\n", str1, str2, str3);

	char str[30] = "C language is easy";
	int i = 0;
	while (str[i] != 0) {
		i++;
	}
	printf("총 문자열 %s의 길이는 %d입니다.\n", str, i);
	*/

	/*
	* int ch;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	*/

	/*
	int ch;
	while ((ch = _getch()) != 'q') {
		_putch(ch);
	}
	*/

	char name[100];
	char address[100];
	printf("이름을 입력하세요: ");
	gets(name);
	printf("주소를 입력하세요: ");
	gets(address);
	
	puts(name);
	puts(address);

	int i = 0, count = 0;
	while (name[i] != NULL) {
		i++;
		count++;
	}
	printf("입력한 이름의 길이는 %d\n", count);
}