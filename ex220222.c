#include <stdio.h>
/*
int func();



int main() {
	int sum = 0;
	
	sum = func(5, 10);
	printf("sum = %d\n", sum);
	sum = func(2, 3);
	printf("sum = %d\n", sum);
	sum = func(7, 4);
	printf("sum = %d\n", sum);
	
	




	return 0;
}

int func(int x, int y) {
	return x + y;
}
*/

/*							// �Լ� ����ο��� �����ͷ� �ްڴٰ� 
*							// ���� ������ ������
void swap(int *x, int *y);

int main() {
	int a = 5, b = 10;

	printf("a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}
*/

/*				//���丮�� ���ϱ�
int fact(int n);
int main() {
	int x = 3;
	int result;
	result = fact(x);
	printf("factorial(%d)! = %d \n", x, result);


	return 0;
}
int fact(int n) {
	printf("factorial(%d)!\n", n);
	if (n <= 1) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}

}
*/

/*
void binary(int x) {		//return ���� �ʿ������ void�� ����
	if (x > 0) {
		binary(x / 2);
		printf("%d ", x % 2);
	}
}

int sum(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return(n + sum(n - 1));
	}
}

int main() {
	int n = 55;
	int hap = 0;
	hap = sum(n);
	printf("1 + 2 + .. + %d = %d\n", n, hap);
	printf("====================\n");
	binary(9);

	return 0;
}
*/