#include <stdio.h>
/*
void main() {
	int a[] = { 10,20,30,40,50 };
	int* p;
	p = a;
	printf("a[0] = %d, a[1] = %d\n", a[0], a[1]);
	printf("p[0] = %d, p[1] = %d\n", p[0], p[1]);
	p[0] = 40;
	p[1] = 90;
	printf("a[0] = %d, a[1] = %d\n", a[0], a[1]);
	printf("p[0] = %d, p[1] = %d\n", p[0], p[1]);
}
*/

int add(int a, int b) {
	printf("add함수호출\n");
	return (a + b);
}
int sub(int a, int b) {
	printf("sub함수호출\n");
	return (a - b);
}
int mul(int a, int b) {
	printf("mul함수호출\n");
	return (a * b);
}
void func(int (*fp)(int, int)) {
	int result, a, b;
	printf("두 수 입력");
	scanf_s("%d %d", &a, &b);
	result = fp(a, b);
	printf("result = %d\n", result);
}

void main() {
	/*
	void (*fp)();
	int (*fpi)(int, int);
	int result;
	fpi = add;
	result = fpi(1, 2);
	printf("result = %d\n", result);
	result = add(1, 2);
	printf("result = %d\n", result);
	*/
	//int (*fp)(int, int);
	func(add);
	func(sub);
	func(mul);
}