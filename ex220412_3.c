/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// �ؽ�Ʈ ���� ������ �ܾ� �˻�
int main() {
	FILE* fp = NULL;


	char filename[20], buffer[100], word[10];
	int line = 0;
	printf("���� �̸� �Է�: ");
	scanf("%s", filename);
	printf("�˻��� �Է�: ");
	scanf("%s", word);

	if ((fp = fopen(filename, "r")) == NULL) {
		puts("���� ���� ����\n");
		exit(1);
	}
	else {
		puts("���� �б� ����\n");
	}

	while (fgets(buffer, 100, fp)) {
		line++;
		if (strstr(buffer, word)) {
			printf("%s ������ %d��° �ٿ��� �ܾ� %s�߰ߵ�\n",
				filename, line, word);
		}
	}


	return 0;
}
*/