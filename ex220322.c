#include <stdio.h>
#define SIZE 5



void main() {
	int i = 0;
	//int a[SIZE];
	int score[SIZE];
	//int a[SIZE] = {1,2,3,4,5};

	for (i = 0; i < SIZE; i++) {
		//a[i] = rand() % 100 + 1;
		printf("%d번째 학생의 점수: ", i + 1);
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < SIZE; i++) {
		printf("a[%d] = %d \n", i, score[i]);
	}



}