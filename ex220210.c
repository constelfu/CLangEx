#include <stdio.h>

int main() {
	
	int n;
	int level;

	/*
	printf("�����Է�(1~5): ");
	scanf_s("%d", &n);

	switch (n) {
	    case 1: printf("1��\n\n\n"); break;
	    case 2: printf("2��\n\n\n"); break;
	    case 3: printf("3��\n\n\n"); break;
		default: printf("1~3���� ���ּ���");
	}
	*/

	printf("�����Է�(0~2): ");
	scanf_s("%d", &level);

	switch (level) {
	case 0: printf("delete ���� ����\n");
	case 1: printf("write ���� ����\n");
	case 2: printf("read ���� ����\n"); break;
	default: printf("0~2������\n");
	}
	
	return 0;

}