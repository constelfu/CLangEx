/*
2022/1/27 �Ϸ�
�躴��
�ʱ� 1�� ����
*/
#include <stdio.h>

void main() {
	int first_in, second_in, value;			
	char calculating = 'a';									//������ �Էº���
	float value2, first_in2, second_in2 = 0;				//�������� ����
	
	printf("������ �Է�: ");
	scanf_s("%c", &calculating, 1);


	if (calculating == '+') {

		printf("����� ����1: ");
		scanf_s("%d", &first_in);

		printf("����� ����2: ");
		scanf_s("%d", &second_in);

		value = first_in + second_in;

		printf("\n��갪�� %d�Դϴ�", value);

	}
	else if (calculating == '-') {

		printf("����� ����1: ");
		scanf_s("%d", &first_in);

		printf("����� ����2: ");
		scanf_s("%d", &second_in);

		value = first_in - second_in;

		printf("\n��갪�� %d�Դϴ�", value);
	}
	else if (calculating == '/') {

		printf("����� ����1: ");			
		scanf_s("%f", &first_in2);					//�Ҽ��� ǥ�ÿ� %f

		printf("����� ����2: ");
		scanf_s("%f", &second_in2);					//�Ҽ��� ǥ�ÿ� %f

		value2 = first_in2 / second_in2;

		printf("\n��갪�� %.2f�Դϴ�", value2);	//�Ҽ��� ǥ�ÿ� %f
	}
	else if (calculating == '*') {

		printf("����� ����1: ");
		scanf_s("%d", &first_in);

		printf("����� ����2: ");
		scanf_s("%d", &second_in);

		value = first_in * second_in;

		printf("\n��갪�� %d�Դϴ�", value);
	}
	else if (calculating != '+', '-', '/', '*') {
		printf("\a\n�Է��� �߸��Ǿ����ϴ�\n");
	}

	printf("\n\n�̿����ּż� �����մϴ�\n");

}