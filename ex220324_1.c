#include <stdio.h>





void main() {
	int i = 0;
	char c = 0;
	float f = 0;
	int* pi = &i;
	char* pc = &c;
	float* pf = &f;

	
	printf("%d\n", i);
	printf("%d\n\n", *pi);

	printf("%d\n", &i);
	printf("%d\n\n", pi);

	i = 50;
	printf("i ���� ��==============\n");
	printf("%d\n", i);
	printf("%d\n\n", *pi);

	*pi = 100;
	printf("*p ���� ��==============\n");
	printf("%d\n", i);
	printf("%d\n", *pi);
	

}