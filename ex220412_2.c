/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ؽ�Ʈ ���� ���� ����

int main() {
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	
	char file1[30], file2[30], buffer[50];
	printf("���� ���� �̸� �Է�: ");
	scanf("%s", file1);
	printf("���� ���� �̸� �Է�: ");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL) {
		puts("���� ���� ����\n");
		exit(1);
	}
	else {
		puts("���� �б� ����\n");
	}

	if ((fp2 = fopen(file2, "w")) == NULL) {
		puts("���� ���� ����\n");
		exit(1);
	}
	else {
		puts("���� ���� ����\n");
	}

	while (fgets(buffer, 50, fp1) != NULL) {
		fputs(buffer, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
*/