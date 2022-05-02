#include <stdio.h>


int main() {

	char str1[4] = "Yoo";
	str1[2] = 'u';
	printf("원본 = %s\n", str1);


	//int ch;
	

	//printf("한 문자씩 입력을 받습니다(종료: ctrl + z)\n");

	//while ((ch = getchar()) != EOF) {
	//	putchar(ch);
	//}

	char name[20];

	printf("이름: ");
	
	gets_s(name, sizeof(name));
	puts(name);

	//scanf_s("%s", name, sizeof(name));
	//printf(name);

	return 0;
}
