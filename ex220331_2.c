#include <stdio.h>


int main() {

	char str1[4] = "Yoo";
	str1[2] = 'u';
	printf("���� = %s\n", str1);


	//int ch;
	

	//printf("�� ���ھ� �Է��� �޽��ϴ�(����: ctrl + z)\n");

	//while ((ch = getchar()) != EOF) {
	//	putchar(ch);
	//}

	char name[20];

	printf("�̸�: ");
	
	gets_s(name, sizeof(name));
	puts(name);

	//scanf_s("%s", name, sizeof(name));
	//printf(name);

	return 0;
}
