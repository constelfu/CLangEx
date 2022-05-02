#include <stdio.h>

int main() {
	
	/*			// input_number까지 1부터 1씩 증가하여 덧셈
	int i, hdr = 0, value = 0, value2 = 0;
	int input_number;

	printf("숫자 입력: ");
	scanf_s("%d", &input_number);

	for (i = 1; i <= input_number; i++) {
		hdr += i;
		printf("더해진 값 = %d\n", hdr);

	}

	printf("총합 = %d\n", hdr);
	*/

	/*
	printf("숫자 입력: ");
	scanf_s("%d", &input_number);

	for (i = 1; i <= input_number; i++) {
		value = i + hdr;
		value2 += value;
		hdr -= 1;
		
		printf("더해진 값 = %d\n", value2);
	}

	printf("총합 = %d\n", value2);
	*/

	/*
	int number;
	int max = 10;
	int min = 1;

	printf("숫자를 입력해주세요: ");
	scanf_s("%d", &number);
	/*

	/*
	if (number > max) {
		printf("%d는 max보다 큰 수입니다\n", number);
	}
	else {
		printf("%d는 max보다 작은 수입니다\n", number);
	}
	*/

	/*
	if (number < min) {
		printf("%d는 min보다 작은 수입니다", number);
	}
	else {
		printf("min보다 큰 수입니다");
	}
	*/

	/*
	int score;
	printf("점수입력: ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("A");
	}
	else if (score >= 80) {
		printf("B");
	}
	else if (score >= 70) {
		printf("C");
	}
	else if (score >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
	*/

	/*
	int x, y, result = 0;
	char op;
	printf("2+5 형식으로 입력: ");
	scanf_s("%d %c %d", &x, &op, 1, &y);
	*/

	/*
	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '/')
		result = x / y;
	else if (op == '*')
		result = x * y;
	else
		printf("잘못된 연산자입니다");
	*/

	/*
	switch (op) {
	case '+': result = x + y; break;
	case '-': result = x - y; break;
	case '*': result = x * y; break;
	case '/': result = x / y; break;
	default: printf("잘못된 연산자입니다");
	}	//switch end

	printf("%d %c %d = %d", x, op, y, result);
	*/

	/*
	char ch;
	printf("문자: ");
	scanf_s("%c", &ch, 1);
	
	if (ch >= 'A' && ch <= 'Z') {
		printf("%c는 대문자입니다", ch);
	}
	else if (ch >= 'a' && ch <= 'z') {
		printf("%c는 소문자입니다", ch);
	}
	else if (ch >= '0' && ch <= '9') {
		printf("%c는 숫자입니다", ch);
	}
	else {
		printf("%c는 기타문자입니다", ch);
	}
	*/
	
	/*
	int number;
	printf("넘버: ");
	scanf_s("%d", &number);
	
	switch (number) {
	case 0: printf("없음"); break;
	case 1: printf("하나");				// break를 안 쓸 경우 그다음 문장으로 넘어가서
	case 2: printf("둘"); break;		// break가 나올 때까지 실행한다
	default: printf("그외"); break;
	}
	*/
	

	/*				//월별 날짜 계산기	if 문 안에 switch문 넣어서 잘못된 값 검출
	int month;
	
	printf("몇 월인지 입력: ");
	scanf_s("%d", &month);

	if (month > 12) {
		printf("입력이 잘못되었습니다\n");
	}
	else {
		switch (month) {
		case 2: printf("2월은 28일입니다"); break;
		case 4:
		case 6:
		case 9:
		case 11: printf("%d월은 30일입니다", month); break;
		default: printf("%d월은 31일입니다", month); break;

		}
	}
	*/
	
	
	


	return 0;
}