/*
2022/1/27 2�� �Ϸ�
2022/2/10 3�� ����
�躴��
3�� ���� ����
*/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int   first_in, second_in;
	char  calculating;						//������ �Էº���
	float value;							//�������� ����
	
	printf("���� �Է�: ");
	
	scanf_s("%d", &first_in);						//scanf_s �Ẹ��
	scanf_s("%c", &calculating, 1);
	scanf_s("%d", &second_in);
	
	//scanf("%d %c %d", &first_in, &calculating, &second_in);	//���� scanf
	/*
	if (calculating == '+') {
		printf("\n%d + %d�� %d�Դϴ�", first_in, second_in, first_in + second_in);
	}
	else if (calculating == '-') {
		printf("\n%d - %d�� %d�Դϴ�", first_in, second_in, first_in - second_in);
	}
	else if (calculating == '/') {
		value = (float)first_in / second_in;		//�Ǽ���ȯ
		printf("\n%d / %d�� %.2f�Դϴ�", first_in, second_in, value);
	}
	else if (calculating == '*') {
		printf("\n%d x %d�� %d�Դϴ�", first_in, second_in, first_in * second_in);
	}
	else if (calculating != ('+', '-', '/', '*')) {
		printf("\a\n�Է��� �߸��Ǿ����ϴ�\n");
	}
	*/
	
	switch (calculating) {
	case '+': printf("\n%d + %d�� %d�Դϴ�", first_in, second_in, first_in + second_in); break;
	case '-': printf("\n%d - %d�� %d�Դϴ�", first_in, second_in, first_in - second_in); break;
	case '*': printf("\n%d x %d�� %d�Դϴ�", first_in, second_in, first_in * second_in); break;
	case '/': value = (float)first_in / second_in;		//�Ǽ���ȯ
		printf("\n%d / %d�� %.2f�Դϴ�", first_in, second_in, value); break;
	default: printf("\a\n�Է��� �߸��Ǿ����ϴ�\n");
	}

	printf("\n\n�̿����ּż� �����մϴ�\n");

}