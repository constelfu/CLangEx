#include <stdio.h>
#define SIZE 5
/*
void swap1(int x, int y) {
	int tmp;

	printf("x = %d, y = %d\n", x, y);
	tmp = x;
	x = y;
	y = tmp;
	printf("x = %d, y = %d\n", x, y);
}

void swap2(int* px, int* py) {
	int tmp;

	printf("px = %d, py = %d\n", *px, *py);
	tmp = *px;
	*px = *py;
	*py = tmp;
	printf("px = %d, py = %d\n", *px, *py);
}
*/

void main() {
	/*
	int i = 10;
	int* pi = &i;
	

	printf("i = %d, pi = %d, pi = %d\n\n", i, *pi, pi);
	(*pi)++;
	printf("i = %d, pi = %d, pi = %d\n\n", i, *pi, pi);
	
	printf("i = %d, pi = %d, pi = %d\n\n", i, *pi, pi);

	i = 50;
	printf("i = %d, pi = %d, pi = %d\n\n", i, *pi, pi);
	*/

	/*
	int a = 10, b = 50;

	printf("a = %d, b = %d\n", a, b);
	swap2(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	*/

	int a[] = { 1,2,3,4,5 };
	int* p;
	p = a;

	for (int i = 0; i < SIZE; i++) {
		printf("a[%d] = %d\t", i, a[i]);
		printf("p[%d] = %d\n", i, p[i]);
	}
	for (int i = 0; i < SIZE; i++) {
		p[i] = 10 * i;
	}
	printf("\n\n\n");
	for (int i = 0; i < SIZE; i++) {
		printf("a[%d] = %d\t", i, a[i]);
		printf("p[%d] = %d\n", i, p[i]);
	}

	/*
	printf("a = %p\n", a);			//배열의 시작주소
	printf("a+1 = %p\n", a+1);		//배열의 시작주소 + 4(int)
	printf("*a = %d\n", *a);		//a[0]
	printf("*(a+1) = %d\n", *(a+1));//a[1]
	*/
}
