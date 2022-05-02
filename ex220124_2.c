#include <stdio.h>

void main() {
	int a[5] = { 0,1,2,3,4 };
	int *ptr;

	ptr = &a[0];

	int b = *(ptr + 1);

	//for (b = 0; b > 5; b++);
	
	printf("%d\n", b);
}