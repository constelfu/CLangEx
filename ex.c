#include <stdio.h>
//2022/1/28
/*
&& AND����
|| OR����
! NOT����
(a > b) ? a : b ���׿�����(a�� b���� ũ�� a�� �ְ� �ƴϸ� b�� �־�)
�������� ++a ���� +1�� �� ������ ����
�������� a++ ���� a���� ���� ������ a���� +1

AND�� ��� ���� ���� ������ ��� ���� ���� �������� ����(�̹� 0�� ����)
OR�� ��� ���� ���� ���� ��� ���� ���� �������� ����(�̹� 1�� ����)

*/

int main() {
	/*
	int a = 10, b = 10, c = 10, d = 10;
	int x, y, e, f;

	x = ++a;
	y = --b;
	
	printf("����������\n");
	printf("a = %d\n b = %d\n", a, b);
	printf("x = %d\n y = %d\n", x, y);

	e = c++;
	f = d--;

	printf("====================\n");
	printf("����������\n");
	printf("c = %d\n d = %d\n", c, d);
	printf("e = %d\n f = %d\n", e, f);
	*/

	/*
	int x = 10, y = 10;
	
	printf("===============\n");
	printf("  x = %d \n", x);
	printf("++x = %d \n", ++x);		//���� ����
	printf("  x = %d \n", x);
	printf("===============\n");
	printf("===============\n");
	printf("  y = %d \n", y);
	printf("y++ = %d \n", y++);		//���� ����
	printf("  y = %d \n", y);
	*/

	/*
	int x, y;
	x = -10;
	y = -x;

	printf("x = %d \n", x);
	printf("y = %d \n", y);
	*/

	/*
	int x = 1, y = 1;
	int nextx, nexty;

	nextx = ++x;
	nexty = y++;
	
	printf("++x = %d\n", nextx);
	printf("y++ = %d\n", nexty);
	*/

	/*
	int x, y;

	printf("�� ���� ������ �Է��Ͻÿ�\n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);

	printf("%d == %d�� ���: %d\n",x, y, x == y);
	printf("%d != %d�� ���: %d\n", x, y, x != y);
	printf("%d > %d�� ���: %d\n", x, y, x > y);
	printf("%d < %d�� ���: %d\n", x, y, x < y);
	printf("%d >= %d�� ���: %d\n", x, y, x >= y);
	printf("%d <= %d�� ���: %d\n", x, y, x <= y);
	*/

	/*���׿�����*/
	int x, y;

	printf("ù��° ����? ");
	scanf_s("%d", &x);
	printf("�ι�° ����? ");
	scanf_s("%d", &y);

	printf("ū�� = %d \n", (x > y) ? x : y);
	printf("������ = %d \n", (x < y) ? x : y);



	return 0;
	
}