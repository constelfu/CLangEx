#include <stdio.h>

/*
int getLine(int x1, int y1, int x2, int y2, float* slope, float* yintercept) {
	if (x1 == x2) {
		return -1;
	}
	else {
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;
		return 0;
	}
}

void main() {
	float s, y;
	if (getLine(3, 3, 6, 6, &s, &y) == -1) {
		printf("error\n");
	}
	else {
		printf("기울기 =%f, 절편 = %f\n", s, y);
	}
}
*/

/*
void sub(int b[]) {
	b[0] = 4;
	b[1] = 5;
	b[2] = 6;
}
void main() {
	int a[] = { 10,20,30 };
	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
	printf("*a = %d, *(a+1) = %d, *(a+2) = %d\n", *a, *(a + 1), *(a + 2));
	printf("a = %d, a+1 = %d, a+2 = %d\n", a, a + 1, a + 2);
	printf("a = %d, &a[0] = %d, &a[1] = %d, &a[2] = %d\n", a, &a[0], &a[1], &a[2]);
}
*/