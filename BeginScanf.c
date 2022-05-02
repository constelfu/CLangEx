/*
printf()와 scanf() 연습
*/
/*텍스트 클릭 시 더블클릭돼서 사이에 텍스트를 추가해야 되는데
* 텍스트가 대체되는 현상 나올 경우 insert키 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	//환율계산
	double rate;
	double usd;
	int krw;

	printf("달러에 대한 원화 환율을 입력하시오: ");
	scanf("%lf", &rate);

	printf("원화 금액을 입력하시오: ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("원화 %d원은 %lf달러입니다.\n", krw, usd);
	
	
	/*		//정수,실수
	int a = 123;
	printf("%d\n", a);
	printf("%5d\n", a);
	printf("%-5d\n", a);
	printf("%05d\n", a);

	printf("---------------\n");

	double b = 123.12345678;
	printf("%lf\n", b);
	printf("%12lf\n", b);
	printf("%12.3lf\n", b);
	printf("%.3lf\n", b);
	*/

	/*		//문자
	char ch = 'A';
	printf("%c\n", ch);
	printf("%5c\n", ch);
	printf("%-5c\n", ch);
	*/

	/*		//문자열 (문자열은 문자 뒤에 널문자가 포함돼있음)
	char*str = "C program";
	printf("%s\n", str);
	printf("%20s\n", str);
	printf("%-20s\n", str);
	printf("%5s\n", str);
	printf("%10.5s\n", str);
	*/

	/*		//scanf()함수예제입니다
	int a;
	float b;
	printf("a= ");
	scanf("%d", &a);
	printf("입력받은 a=%d\n", a);

	printf("b= ");
	scanf("%f", &b);
	printf("입력받은 b=%.4f\n", b);
	*/

	/*		//저축액 계산 프로그램
	int salary;
	int deposit;
	printf("월급 입력하세요: ");
	scanf("%d", &salary);
	deposit = 10 * salary * 12;
	printf("10년 동안의 저축액: %d만원\n", deposit);
	*/

	/*		//원의 면적 계산
	float radius;
	float area;
	printf("반지름: ");
	scanf("%f", &radius);
	area = radius * radius * 3.14;
	printf("원의 면적 = %.4f\n", area);
	*/

}