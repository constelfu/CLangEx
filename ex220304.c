#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10


int main() {
	//int i;
	/*				// 1. 직접적인 배열의 접근방식
	int s[SIZE];
	s[0] = 10;
	s[1] = 20;
	s[2] = 30;

	for (i = 0; i < SIZE; i++) {
		printf("s[%d] = %d \n", i, s[i]);
	}
	*/

	/*				// 2. 배열선언과 동시에 할당하는 방식
	int t[SIZE] = { 1,2 };			// 할당되지 않을 경우 0 배치
	for (i = 0; i < SIZE; i++) {
		printf("t[%d] = %d \n", i, t[i]);
	}
	*/

	/*				// 3. srand()함수를 이용하는 방식
	srand((unsigned)time(NULL));
	int ss[ SIZE ];
	for (i = 0; i < SIZE; i++) {
		ss[i] = (rand() % 100) + 1;
		printf("ss[%d] = %d\n", i, ss[i]);
	}
	*/

	/*					// 4. 입력하여 배열값을 할당하는 방식
	int jumsu[SIZE];
	printf("3개의 수 입력\n");
	for (i = 0; i < SIZE; i++) {
		scanf_s("%d", &jumsu[i]);
	}
	for (i = 0; i < SIZE; i++) {
		printf("jumsu[%d] = %d\n", i, jumsu[i]);
	}
	*/

	/*					// 배열 안의 최솟값과 최댓값
	int price[SIZE] = { 0 };
	int i, min = 0, max = 0;
	srand((unsigned)time(NULL));
	

	for (i = 0; i < SIZE; i++) {
		price[i] = (rand() % 100) + 1;
		printf("%-3d", price[i]);
	}
	printf("\n==============================\n");
	min = price[0];
	max = price[0];

	for (i = 0; i < SIZE; i++) {
		if (price[i] < min) {
			min = price[i];
		}
	}
	printf("배열 안의 최솟값 = %d\n", min);
	printf("==============================\n");

	for (i = 0; i < SIZE; i++) {
		if (price[i] > max) {
			max = price[i];
		}
	}
	printf("배열 안의 최댓값 = %d", max);
	*/

	/*				// 학생 점수의 평균 구하기
	int jumsu[SIZE];
	int i, sum = 0;
	double avg;
	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		jumsu[i] = (rand() % 100) + 1;
		printf("%-3d", jumsu[i]);
	}
	printf("==============================\n");
	for (i = 0; i < SIZE; i++) {
		sum += jumsu[i];
		avg = (double)(sum / 10);
		printf("총점 = %d\n평균 = %.2lf\n", sum, avg);
	}
	*/

	/*
	char answer;
	int seat, i;
	int seats[SIZE] = { 0 };
	
	while (1) {
		printf("좌석을 예약하시겠습니까?(y/n)");
		scanf_s(" %c", &answer, 1);
		if (answer == 'y') {
			printf("\n=============================\n");
			for (i = 0; i < SIZE; i++) {
				printf("%3d", i + 1);
			}
			printf("\n=============================\n");
			for (i = 0; i < SIZE; i++) {
				printf("%3d", seats[i]);
			}
			printf("\n=============================\n");
			printf("\n원하는 좌석번호 입력: ");
			scanf_s("%d", &seat);
			if (seat <= 0 || seat > SIZE) {
				printf("1부터 10까지의 번호만 입력가능합니다");
				continue;
			}
			if (seats[seat - 1] == 0) {    //성공일 때
				seats[seat - 1] = 1;
				printf("예약완료\n");
			}
			else {
				printf("예약 좌석입니다\n");
			}
		} //yes
		else if (answer == 'n') {
			printf("bye\n");
			return 0;
		}
	}
	*/
	
	/*				// 2차원 배열에서의 좌석 예약
	char answer;
	int seatr, seatc;
	int i, j;
	int seats[SIZE][SIZE];
	printf("===극장===\n   ");
	for (i = 0; i < SIZE; i++) {
		printf("%3d", i + 1);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++) {
		printf("%3d", i + 1);
		for (j = 0; j < SIZE; j++) {
			seats[i][j] = 0;
			printf("%3d", seats[i][j]);
		} printf("\n");//j
	} // i
	while (1) {
		printf("좌석을 예약하시겠습니까?(y/n): ");
		scanf_s(" %c", &answer, 1);

		if (answer == 'y') {
			printf("원하시는 좌석 행렬: ");
			scanf_s("%d %d", &seatr, &seatc);
			if ((seatr <= 0 || seatr > SIZE) && (seatc <= 0 || seatc > SIZE)) {
				printf("좌석의 입력범위는 1~10입니다\n");
				continue;
			}
			if (seats[seatr - 1][seatc - 1] == 0) {
				seats[seatr - 1][seatc - 1] = 1;
				printf("예약완료\n");
				printf("===극장===\n   ");
				for (i = 0; i < SIZE; i++) {
					printf("%3d", i + 1);
				}
				printf("\n");
				for (i = 0; i < SIZE; i++) {
					printf("%3d", i + 1);
					for (j = 0; j < SIZE; j++) {
						//seats[i][j] = 0;
						printf("%3d", seats[i][j]);
					} printf("\n");//j
				} // i
			} // 예약좌석 
			else {
				printf("예약불가합니다\n");
			}
		} // yes
		else if (answer == 'n') {
			printf("\nbye\n");
			return 0;
		} // no
	}
	*/
	return 0;
}


