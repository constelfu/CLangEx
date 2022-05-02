#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*		//스왑 알고리즘
	int big, small, temp;

	printf("첫번째 수: ");
	scanf_s("%d", &big);
	printf("두번째 수: ");
	scanf_s("%d", &small);

	if (big < small) {
		temp = big;
		big = small;
		small = temp;
	}
	temp = 0;
	printf("큰 수 = %d\n작은 수 = %d", big, small);
	*/

	/*
	int big =0, small = 0;
	int a, b;

	printf("첫번째 수: ");
	scanf_s("%d", &a);
	printf("두번째 수: ");
	scanf_s("%d", &b);

	if (a > b) {
		big = a;
		small = b;
	}
	else if (a < b) {
		big = b;
		small = a;
	}
	else {
		printf("\n같은 수입니다\n");
		return 0;
	}
	
	printf("큰 수 = %d\n작은 수 = %d", big, small);
	*/
	
	/*
	int x;

	printf("정수 입력: ");
	scanf_s("%d", &x);

	if (x > 0) {
		printf("%d -> 양수\n\n\n", x);
	} else {
		printf("%d -> 음수\n\n\n", x);
	}

	printf("입력하신 수는 %d입니다\n\n\n", x);
	*/

	/*
	int score;

	printf("점수 입력: ");
	scanf_s("%d", &score);
	
	if (score >= 60) {
		if (score >= 90) {
			printf("A학점\n\n");
		}
		else if (score >= 80) {
			printf("B학점\n\n");
		} 
		else if (score >= 70) {
			printf("C학점\n\n");
		}
		else {
			printf("D학점\n\n");
		}
	}
	else {
		printf("F학점\n");
	}
	*/

	/*
	int x;
	
	printf("정수: ");
	scanf_s("%d", &x);
	
	if (x == 0) {
		printf("0임\n");
	}
	else if (x > 0) {
		printf("양수\n");
	}
	else {
		printf("음수\n");
	}
	*/

	/*				//scanf_s로 여러 개의 정보를 입력받을 시
					//표준입력버퍼에 잔여문자가 남게 되어 오류가 발생한다
					//그럴 때 scanf 입력 후 rewind(stdio)함수를 사용하여
					//잔여문자를 지우고 그다음 scanf를 처리하도록 한다
	int age, fee;
	char local;
	fee = 10000;
	
	printf("나이: ");
	scanf_s("%d", &age);
	rewind(stdin);
	printf("지역주민 여부(y/n):");
	scanf_s("%c", &local, 1);

	if (age >= 60) {
		fee -= 5000;
	}
	
	if (local == 'y') {
		fee -= 5000;
		}

	printf("요금: %d", fee);
	*/
	

	return 0;
}