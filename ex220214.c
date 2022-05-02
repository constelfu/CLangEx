#include <stdio.h>
//switch와 if문의 변환

int main() {
	/*
	int menu;

	printf("*****************************\n");
	printf("                      1. 과일\n");
	printf("                      2. 만두\n");
	printf("                      3. 우유\n");
	printf("                      4. 과자\n");
	printf("                        5. 껌\n");
	printf("*****************************\n");
	printf("간식 메뉴를 번호를 선택하세요\n");
	scanf_s("%d", &menu);

	
	if (menu == 1) {
		printf("\n 과일선택 \n\n");
	} else if (menu == 2) {
		printf("\n 만두선택 \n\n");
	}
	else if (menu == 3) {
		printf("\n 우유선택 \n\n");
	}
	else if (menu == 4) {
		printf("\n 과자선택 \n\n");
	}
	else if (menu == 5) {
		printf("\n 껌선택 \n\n");
	}
	

	switch (menu) {
	case 1: printf("\n 과일선택 \n\n"); break;
	case 2: printf("\n 만두선택 \n\n"); break;
	case 3: printf("\n 우유선택 \n\n"); break;
	case 4: printf("\n 과자선택 \n\n"); break;
	case 5: printf("\n   껌선택 \n\n"); break;
	}
	*/

	/*				//홀짝 구분
	int i = 0;

	printf("정수입력: ");
	scanf_s("%d", &i);

	
	if ((i % 2) == 0) {
		printf("%d는 짝수입니다\n", i);
	}
	else {
		printf("%d는 홀수입니다\n", i);
	}
	

	switch (i % 2) {
	case 0: printf("%d는 짝수입니다\n", i); break;
	case 1: printf("%d는 홀수입니다\n", i); break;
	}
	*/

	
	int big, small;

	printf("정수1 입력: ");
	scanf_s("%d", &big);
	printf("정수2 입력: ");
	scanf_s("%d", &small);
	/*
	if (big > small) {
		printf("%d가 큰 수, %d가 작은 수\n", big, small);
	}
	else if (small > big) {
		printf("%d가 큰 수, %d가 작은 수\n", small, big);
	}
	else {
		printf("같은 수입니다\n");
	}
	*/

	/*			//switch는 같은 수를 처리 못하게 됨 if를 섞어쓸 바엔 그냥 첨부터 if
	if (big == small) {
		printf("같은 수입니다\n");
	}
	else {
		switch (big > small) {
		case 0: printf("%d가 큰 수, %d가 작은 수\n", small, big); break;
		case 1: printf("%d가 큰 수, %d가 작은 수\n", big, small); break;
		}
	}
	*/

	

	return 0;
}