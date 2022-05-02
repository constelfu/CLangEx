#include <stdio.h>





void main() {
	/*
	int i = 10;
	char c = 69;
	float f = 12.3;
	int* p;
	p = &i;
	printf("i = %d, &i = %d, p = %d, &p = %d\n", i, &i, p, &p);
	*p = 20;
	printf("i = %d, &i = %d, p = %d, &p = %d\n", i, &i, p, &p);
	printf("*p = %d\n", *p);

	printf("int byte크기 = %d byte\n", sizeof(i));
	printf("char byte크기 = %d byte\n", sizeof(c));
	printf("float byte크기 = %d byte\n", sizeof(f));

	printf("i의 주소: %u\n", &i);
	printf("c의 주소: %u\n", &c);
	printf("f의 주소: %u\n", &f);

	printf("i의 값: %d\n", i);
	printf("c의 값: %d\n", c);
	printf("f의 값: %f\n", f);
	*/

	/*
	int* pi = 10000;
	char* pc = 10000;
	double* pd = 10000;

	printf("pi의 값 %d\n", pi);
	printf("pc의 값 %d\n", pc);
	printf("pd의 값 %d\n\n", pd);
	printf("pi의 값 %d\n", pi+2);
	printf("pc의 값 %d\n", pc+2);
	printf("pd의 값 %d\n\n", pd+2);

	pi++;
	pc++;
	pd++;

	printf("pi의 값 %d\n", pi);
	printf("pc의 값 %d\n", pc);
	printf("pd의 값 %d\n\n", pd);

	printf("pi의 값 %d\n", pi+2);
	printf("pc의 값 %d\n", pc+2);
	printf("pd의 값 %d\n", pd+2);
	*/

	/*
	int a = 1;    int* p = &a;
	char b = 'A';    char* pc = &b;
	double d = 3.1;    double* pd = &d;
	
	printf("a의 값 = %d  &a = %d  p = %d  *p = %d\n", a, &a, p, *p);
	*/

	int i = 10;
	int* pi = &i;
	int v = 0;


	printf("i = %d  *pi = %d  v = %d  pi = %d\n", i, *pi, v, pi);
	v = (*pi)++;							// 값을 가져와서 값 증가
	printf("i = %d  *pi = %d  v = %d  pi = %d\n", i, *pi, v, pi);
	v = *pi++;								// 주소 증가(바이트 크기만큼)
	printf("i = %d  *pi = %d  v = %d  pi = %d\n", i, *pi, v, pi);
}