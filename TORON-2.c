/*
2022/1/27 2차 완료
2022/2/10 3차 수정
김병관
3차 최종 버전
*/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int   first_in, second_in;
	char  calculating;						//연산자 입력변수
	float value;							//나눗셈용 변수
	
	printf("계산식 입력: ");
	
	scanf_s("%d", &first_in);						//scanf_s 써보기
	scanf_s("%c", &calculating, 1);
	scanf_s("%d", &second_in);
	
	//scanf("%d %c %d", &first_in, &calculating, &second_in);	//기존 scanf
	/*
	if (calculating == '+') {
		printf("\n%d + %d는 %d입니다", first_in, second_in, first_in + second_in);
	}
	else if (calculating == '-') {
		printf("\n%d - %d는 %d입니다", first_in, second_in, first_in - second_in);
	}
	else if (calculating == '/') {
		value = (float)first_in / second_in;		//실수변환
		printf("\n%d / %d는 %.2f입니다", first_in, second_in, value);
	}
	else if (calculating == '*') {
		printf("\n%d x %d는 %d입니다", first_in, second_in, first_in * second_in);
	}
	else if (calculating != ('+', '-', '/', '*')) {
		printf("\a\n입력이 잘못되었습니다\n");
	}
	*/
	
	switch (calculating) {
	case '+': printf("\n%d + %d는 %d입니다", first_in, second_in, first_in + second_in); break;
	case '-': printf("\n%d - %d는 %d입니다", first_in, second_in, first_in - second_in); break;
	case '*': printf("\n%d x %d는 %d입니다", first_in, second_in, first_in * second_in); break;
	case '/': value = (float)first_in / second_in;		//실수변환
		printf("\n%d / %d는 %.2f입니다", first_in, second_in, value); break;
	default: printf("\a\n입력이 잘못되었습니다\n");
	}

	printf("\n\n이용해주셔서 감사합니다\n");

}