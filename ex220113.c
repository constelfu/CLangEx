/* 기본구조 */
// 들여쓰기는 탭1회, 일반 공백은 스페이스바
/*

	%: 형식을 나타냄
 %d: 10진 정수로 출력 (decimal)
 %f: 실수로 출력 (float)
 %c: 문자로 출력 (character)
 %s: 문자열로 출력 (string)
 %lf: float의 double형 (long float)

 \0: 널문자 = 문자열의 끝
 \n 줄바꿈 = 다음 라인의 시작 위치로 커서 이동
 \t 텝문자 = 다음 탭 위치로 커서 이동
 \' 작은따옴표 = 원래의 작은따옴표 출력
 \" 큰따옴표 = 원래의 큰따옴표 출력
 \\ 역슬래시 = 원래의 역슬래시 출력

 scanf("%d, &x"); &x > 값을 저장할 변수의 주소
 */
#include <stdio.h>

int main() 
{
	int   iData;	//변수 선언
	char  cData;	//변수 선언
	double fData;	//변수 선언

	int num1;
	double num2, result;
	/*
	int sum;
	int a, b;	
	*/

	iData = 5;		// 변수에 값을 대입
	cData = 'a';	// 변수에 값을 대입
	fData = 1.1;	// 변수에 값을 대입

	//a = 6, b = 1;		//변수 선언 & 대입 == > 초기화
	num1 = iData + iData;
	num2 = iData - fData;
	result = num1 + num2;
	
	//scanf("")

	/*
	sum = a + b;
	printf("두 수의 합: %d\n", sum); 
	*/
	printf("%d / %.1lf = %.1lf\n\n", num1, num2, result);

	return 0; // 함수의 반환
}