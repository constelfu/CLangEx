/*
2022/1/27 완료
김병관
초기 1차 버전
*/
#include <stdio.h>

void main() {
	int first_in, second_in, value;			
	char calculating = 'a';									//연산자 입력변수
	float value2, first_in2, second_in2 = 0;				//나눗셈용 변수
	
	printf("연산자 입력: ");
	scanf_s("%c", &calculating, 1);


	if (calculating == '+') {

		printf("계산할 숫자1: ");
		scanf_s("%d", &first_in);

		printf("계산할 숫자2: ");
		scanf_s("%d", &second_in);

		value = first_in + second_in;

		printf("\n계산값은 %d입니다", value);

	}
	else if (calculating == '-') {

		printf("계산할 숫자1: ");
		scanf_s("%d", &first_in);

		printf("계산할 숫자2: ");
		scanf_s("%d", &second_in);

		value = first_in - second_in;

		printf("\n계산값은 %d입니다", value);
	}
	else if (calculating == '/') {

		printf("계산할 숫자1: ");			
		scanf_s("%f", &first_in2);					//소수점 표시용 %f

		printf("계산할 숫자2: ");
		scanf_s("%f", &second_in2);					//소수점 표시용 %f

		value2 = first_in2 / second_in2;

		printf("\n계산값은 %.2f입니다", value2);	//소수점 표시용 %f
	}
	else if (calculating == '*') {

		printf("계산할 숫자1: ");
		scanf_s("%d", &first_in);

		printf("계산할 숫자2: ");
		scanf_s("%d", &second_in);

		value = first_in * second_in;

		printf("\n계산값은 %d입니다", value);
	}
	else if (calculating != '+', '-', '/', '*') {
		printf("\a\n입력이 잘못되었습니다\n");
	}

	printf("\n\n이용해주셔서 감사합니다\n");

}