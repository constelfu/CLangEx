#include <stdio.h>

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main() {
	int a = 9, b = 5;
	int call = 0;
	int result = 0;			//���ϰ��� �޾��� ����

	printf("���� ���� ����մϴ�\na = %d, b = %d\n\n", a, b);
	printf("����ϰ� ���� ������ ��� ���ڸ� �Է�: \n");
	printf("1. ���ϱ�\n2. ����\n3. ���ϱ�\n4. ������\n");
	scanf_s("%d", &call);

	switch (call) {
	case 1: result = sum(a, b); break;
	case 2: result = sub(a, b); break;
	case 3: result = mul(a, b); break;
	case 4: result = div(a, b); break;
	default: printf("\a\n�Է��� �߸��Ǿ����ϴ�\n"); return 0;
	}

	printf("\n���: %d\n", result);

	return 0;
}

int sum(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x % y;
}

/* // ���ϰ� ���� �׳� �Լ� ������ ��±��� �ϰ� �Լ��� break�� �ᵵ ����
void sum(int x, int y) {
	printf("\n���: %d\n", x + y);
}
*/