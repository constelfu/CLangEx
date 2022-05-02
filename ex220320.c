#include <stdio.h>
void func(void);
long fact(int n);

void main() {
	printf("함수의 실행횟수 \t 함수의 변수값\n\n\n");
	func();
	func();
	func();
	int n;
	printf("정수 입력: ");
	scanf_s("%d", &n);
	printf("%d! = ", n);
	fact(n);
}

void func(void) {
	static int cntRunFunc = 0;
	int cntLocal = 0;
	printf("%10d  \t", ++cntRunFunc);
	printf("%15d  \n", ++cntLocal);
}

long fact(int n) {
	printf("%d", n);
	
	if (n == 1) {
		return 1;
	}
	else {
		printf(" * ");
		return n * fact(n - 1);
	}
}