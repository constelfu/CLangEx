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

	printf("int byteũ�� = %d byte\n", sizeof(i));
	printf("char byteũ�� = %d byte\n", sizeof(c));
	printf("float byteũ�� = %d byte\n", sizeof(f));

	printf("i�� �ּ�: %u\n", &i);
	printf("c�� �ּ�: %u\n", &c);
	printf("f�� �ּ�: %u\n", &f);

	printf("i�� ��: %d\n", i);
	printf("c�� ��: %d\n", c);
	printf("f�� ��: %f\n", f);
	*/

	/*
	int* pi = 10000;
	char* pc = 10000;
	double* pd = 10000;

	printf("pi�� �� %d\n", pi);
	printf("pc�� �� %d\n", pc);
	printf("pd�� �� %d\n\n", pd);
	printf("pi�� �� %d\n", pi+2);
	printf("pc�� �� %d\n", pc+2);
	printf("pd�� �� %d\n\n", pd+2);

	pi++;
	pc++;
	pd++;

	printf("pi�� �� %d\n", pi);
	printf("pc�� �� %d\n", pc);
	printf("pd�� �� %d\n\n", pd);

	printf("pi�� �� %d\n", pi+2);
	printf("pc�� �� %d\n", pc+2);
	printf("pd�� �� %d\n", pd+2);
	*/

	/*
	int a = 1;    int* p = &a;
	char b = 'A';    char* pc = &b;
	double d = 3.1;    double* pd = &d;
	
	printf("a�� �� = %d  &a = %d  p = %d  *p = %d\n", a, &a, p, *p);
	*/

	int i = 10;
	int* pi = &i;
	int v = 0;


	printf("i = %d  *pi = %d  v = %d  pi = %d\n", i, *pi, v, pi);
	v = (*pi)++;							// ���� �����ͼ� �� ����
	printf("i = %d  *pi = %d  v = %d  pi = %d\n", i, *pi, v, pi);
	v = *pi++;								// �ּ� ����(����Ʈ ũ�⸸ŭ)
	printf("i = %d  *pi = %d  v = %d  pi = %d\n", i, *pi, v, pi);
}