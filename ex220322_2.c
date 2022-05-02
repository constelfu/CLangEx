#include <stdio.h>
#define SIZE 5

/*
int main() {
	int i, data[SIZE];
	printf("5회 입력\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d번째 정수\n", i + 1);
		scanf_s("%d", &data[i]);
	}
	for (i = 0; i < SIZE; i++) {
		printf("data[%2d] = %3d\n", i, data[i]);
	}
}
*/

void inArr(int a[], int size);		//배열 초기화
void prtArr(int a[], int size);		//배열 출력
void selectSort(int a[], int size);
int biSearch(int a[], int size, int key);
int main() {
	int key, i, data[SIZE];

	inArr(data, SIZE);
	prtArr(data, SIZE);
	selectSort(data, SIZE);
	printf("정렬 후\n");
	prtArr(data, SIZE);

	printf("찾을 숫자는?: ");
	scanf_s("%d", &key);
	int n = biSearch(data, SIZE, key);
	if ( n == -1) {
		printf("찾는 숫자 %d는 없음\n", key);
	}
	else {
		printf("찾는 숫자 %d는 배열의 %d번째에 있음\n", key, n);
	}

	return 0;
}

void inArr(int a[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d번째 정수: ", i + 1);
		scanf_s("%d", &a[i]);
	}
}

void prtArr(int a[], int size) {
	printf("\n\n=======================\n");
	for (int i = 0; i < size; i++) {
		printf("data[%2d] = %3d\n", i, a[i]);
	}
}

void selectSort(int a[], int size) {
	int i, j, minIndex, temp;
	for (i = 0; i < size - 1; i++) {		//세로이동
		minIndex = i;
		for (j = i + 1; j < size; j++) {	//가로이동
			if (a[minIndex] > a[j]) {
				minIndex = j;
			}		
		}
		temp = a[i];
		a[i] = a[minIndex];
		a[minIndex] = temp;
	}
}

int biSearch(int a[], int size, int key) {
	int low = 0, high = size - 1, middle;
	while (low <= high) {
		printf("[%d - %d]", low, high);
		middle = (low + high) / 2;
		if (key == a[middle]) return middle;
		else if (key > a[middle]) low = middle + 1;
		else high = middle - 1;
	}
	return -1;
}