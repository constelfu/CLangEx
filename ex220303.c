#include <stdio.h>
void sort_asc(int *a, int *b);




int main() {
	int a = 7, b = 5;
	sort_asc(&a, &b);
	printf("%d < %d \n", a, b);





	return 0;
}

void sort_asc(int* a, int* b) {
	if (a > b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}