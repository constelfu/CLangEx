/*
2022/01/30
�躴��

*/
#include <stdio.h>

int main() {
	int nail = 0;
	int count = 0;

	while (nail < 100) {
		nail += 5;													// nail = nail + 5;�� ����
		printf("�����̰� �̵��� �Ÿ� = %d m\n", nail);
		(nail < 50) ? (nail -= 1) : (nail -= 2);					//�ǵ��� ��ȣ�� �������� ���� ��
		printf("�����̰� �̵��ϰ� �̲����� �Ÿ� = %d m\n", nail);
		printf("===================\n");

		count++;
	}

	printf("�̵��� Ƚ�� = %dȸ\n", count);

	return 0;

}