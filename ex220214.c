#include <stdio.h>
//switch�� if���� ��ȯ

int main() {
	/*
	int menu;

	printf("*****************************\n");
	printf("                      1. ����\n");
	printf("                      2. ����\n");
	printf("                      3. ����\n");
	printf("                      4. ����\n");
	printf("                        5. ��\n");
	printf("*****************************\n");
	printf("���� �޴��� ��ȣ�� �����ϼ���\n");
	scanf_s("%d", &menu);

	
	if (menu == 1) {
		printf("\n ���ϼ��� \n\n");
	} else if (menu == 2) {
		printf("\n ���μ��� \n\n");
	}
	else if (menu == 3) {
		printf("\n �������� \n\n");
	}
	else if (menu == 4) {
		printf("\n ���ڼ��� \n\n");
	}
	else if (menu == 5) {
		printf("\n ������ \n\n");
	}
	

	switch (menu) {
	case 1: printf("\n ���ϼ��� \n\n"); break;
	case 2: printf("\n ���μ��� \n\n"); break;
	case 3: printf("\n �������� \n\n"); break;
	case 4: printf("\n ���ڼ��� \n\n"); break;
	case 5: printf("\n   ������ \n\n"); break;
	}
	*/

	/*				//Ȧ¦ ����
	int i = 0;

	printf("�����Է�: ");
	scanf_s("%d", &i);

	
	if ((i % 2) == 0) {
		printf("%d�� ¦���Դϴ�\n", i);
	}
	else {
		printf("%d�� Ȧ���Դϴ�\n", i);
	}
	

	switch (i % 2) {
	case 0: printf("%d�� ¦���Դϴ�\n", i); break;
	case 1: printf("%d�� Ȧ���Դϴ�\n", i); break;
	}
	*/

	
	int big, small;

	printf("����1 �Է�: ");
	scanf_s("%d", &big);
	printf("����2 �Է�: ");
	scanf_s("%d", &small);
	/*
	if (big > small) {
		printf("%d�� ū ��, %d�� ���� ��\n", big, small);
	}
	else if (small > big) {
		printf("%d�� ū ��, %d�� ���� ��\n", small, big);
	}
	else {
		printf("���� ���Դϴ�\n");
	}
	*/

	/*			//switch�� ���� ���� ó�� ���ϰ� �� if�� ��� �ٿ� �׳� ÷���� if
	if (big == small) {
		printf("���� ���Դϴ�\n");
	}
	else {
		switch (big > small) {
		case 0: printf("%d�� ū ��, %d�� ���� ��\n", small, big); break;
		case 1: printf("%d�� ū ��, %d�� ���� ��\n", big, small); break;
		}
	}
	*/

	

	return 0;
}