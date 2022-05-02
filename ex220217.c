#include <stdio.h>

int main() {
	/*				//for문 여러 개 사용할 때 같은 변수 사용하지 말 것
	int i = 0;		//이렇게
	int k = 0;		//두 개를 사용할 것
	int x, y;

	printf("반복횟수 입력(x): ");
	scanf_s("%d", &x);
	
	printf("반복횟수 입력(y): ");
	scanf_s("%d", &y);


	for (i = 0; i < y; i++) {
		for (k = 0; k < x; k++) {
			printf("*");
		}
		printf("\n");
	}
	*/

	/*
	int start = 1;
	int end;
	int sum = 0;
	int i = start;

	printf("~까지의 합 구하기 입력: ");
	scanf_s("%d", &end);

	for (i = start; i <= end; i++) {
		
		if (i % 3 == 0) {			//3의 배수 제외
			continue;
		}
		sum += i;
	}

	printf("%3d ~ %3d의 합(3의 배수 제외) = %d\n", start, end, sum);
	*/

	/*
	int inData = 0;
	int sum = 0;
	
	while (inData != 999) {
		sum += inData;
		printf("정수입력(종료 999): ");
		scanf_s("%d", &inData);
	}
	printf("총합 = %d", sum);
	*/

	


	return 0;
}