/*
#include <stdio.h>
#define STUDENTS 5
#define SIZE 7

int getavg(int score[], int n);
void print_arr(int a[], int n);
void square_arr(int a[], int n);

void main() {
	int grade[STUDENTS] = { 1,2,3,4,5 };
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7 };
	print_arr(list, SIZE);
	square_arr(list, SIZE);
	print_arr(list, SIZE);
	int avg = getavg(grade, STUDENTS);
	printf("ЦђБе: %d\n", avg);
}

int getavg(int score[], int n) {
	int i = 0, sum = 0;
	for (i = 0; i < n; i++) {
		sum += score[i];
		printf("score[%d] = %d, sum = %d\n", i, score[i], sum);
		
	}
	return sum / n;
}

void print_arr(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");
}
void square_arr(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		a[i] = a[i] * a[i];
	}
}
*/