#include <stdio.h>
/*
int max(int, int);		// �Լ�����
*/

/*
void add(int x, int y);	// �Լ�����
void sub(int x, int y);
void mul(int x, int y);
void div(int x, int y);
*/

/*
void hamber();
void jajang();
void kimbab();
void sandwitch();
int menu();
void select(int);
*/

int main() {
	/*
	int result = max(1, 3);				// �Լ�ȣ��
	printf("ū���� %d\n", result);
	*/
	/*
	int a = 5, b = 10;					// �Լ�ȣ��
	add(a, b);
	sub(a, b);
	mul(a, b);
	div(a, b);
	*/

	/*
	int i = 1;
	while (i < 5) {
		int choice = menu();
		select(choice);
		i++;
	}
	*/

	return 0;
}
/*
int max(int a, int b) {			// �Լ�����
	
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
	

	// return (a > b) ? a : b;
}*/
/*
void add (int x, int y) {						// �Լ�����
	int result = x + y;
	printf("%d + %d = %d\n", x, y, result);
}
void sub(int x, int y) {
	int result = x - y;
	printf("%d - %d = %d\n", x, y, result);
}
void mul(int x, int y) {
	int result = x * y;
	printf("%d * %d = %d\n", x, y, result);
}
void div(int x, int y) {
	int result = x / y;
	printf("%d / %d = %d\n", x, y, result);
}
*/

/*
void hamber();
void jajang();
void kimbab();
void sandwitch();
int menu() {
	int choice;
	printf("======<�޴�����>======\n");
	printf("1. �ܹ���  \n");
	printf("2. �����  \n");
	printf("3. ���    \n");
	printf("4. ������ġ\n");
	printf("�޴��Է�(1~4): \n");
	scanf_s("%d", &choice);
	return (choice);
}
void select(int choice) {
	switch (choice) {
	case 1: hamber(); break;
	case 2: jajang(); break;
	case 3: kimbab(); break;
	case 4: sandwitch(); break;
	default: printf("�޴��� �ٽ� ��� �ּ���\n");
	}
}
void hamber() {
	int price;
	printf("�ܹ��� ������ ���ÿ�\n1--�Ұ�����\n2--�������");
	scanf_s("%d", &price);
	switch (price) {
	case 1: printf("�Ұ������� ������ 4000���Դϴ�\n"); break;
	case 2: printf("��������� ������ 4500���Դϴ�\n"); break;
	default: printf("�ٽ� �������ּ���\n"); break;	
	}
}
void jajang() {
	int price;
	printf("����� ������ ���ÿ�\n1--¥���\n2--��¥��\n");
	scanf_s("%d", &price);
	switch (price) {
	case 1: printf("¥��� ������ 5000���Դϴ�\n"); break;
	case 2: printf("��¥�� ������ 6000���Դϴ�\n"); break;
	default: printf("�ٽ� �������ּ���\n"); break;
	}
}
void kimbab() {
	int price;
	printf("����� ������ ���ÿ�\n1--¥���\n2--��¥��\n");
	scanf_s("%d", &price);
	switch (price) {
	case 1: printf("¥��� ������ 5000���Դϴ�\n"); break;
	case 2: printf("��¥�� ������ 6000���Դϴ�\n"); break;
	default: printf("�ٽ� �������ּ���\n"); break;
	}
}
void sandwitch() {
	int price;
	printf("����� ������ ���ÿ�\n1--¥���\n2--��¥��\n");
	scanf_s("%d", &price);
	switch (price) {
	case 1: printf("¥��� ������ 5000���Դϴ�\n"); break;
	case 2: printf("��¥�� ������ 6000���Դϴ�\n"); break;
	default: printf("�ٽ� �������ּ���\n"); break;
	}
}
*/