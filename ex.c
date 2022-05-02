#include <stdio.h>
//2022/1/28
/*
&& AND연산
|| OR연산
! NOT연산
(a > b) ? a : b 삼항연산자(a가 b보다 크면 a를 넣고 아니면 b를 넣어)
전위연산 ++a 먼저 +1을 한 다음에 대입
후위연산 a++ 먼저 a값을 넣은 다음에 a값에 +1

AND의 경우 앞의 값이 거짓일 경우 뒤의 값을 연산하지 않음(이미 0값 나옴)
OR의 경우 앞의 값이 참일 경우 뒤의 값을 연산하지 않음(이미 1값 나옴)

*/

int main() {
	/*
	int a = 10, b = 10, c = 10, d = 10;
	int x, y, e, f;

	x = ++a;
	y = --b;
	
	printf("전위연산결과\n");
	printf("a = %d\n b = %d\n", a, b);
	printf("x = %d\n y = %d\n", x, y);

	e = c++;
	f = d--;

	printf("====================\n");
	printf("후위연산결과\n");
	printf("c = %d\n d = %d\n", c, d);
	printf("e = %d\n f = %d\n", e, f);
	*/

	/*
	int x = 10, y = 10;
	
	printf("===============\n");
	printf("  x = %d \n", x);
	printf("++x = %d \n", ++x);		//전위 연산
	printf("  x = %d \n", x);
	printf("===============\n");
	printf("===============\n");
	printf("  y = %d \n", y);
	printf("y++ = %d \n", y++);		//후위 연산
	printf("  y = %d \n", y);
	*/

	/*
	int x, y;
	x = -10;
	y = -x;

	printf("x = %d \n", x);
	printf("y = %d \n", y);
	*/

	/*
	int x = 1, y = 1;
	int nextx, nexty;

	nextx = ++x;
	nexty = y++;
	
	printf("++x = %d\n", nextx);
	printf("y++ = %d\n", nexty);
	*/

	/*
	int x, y;

	printf("두 개의 정수를 입력하시오\n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);

	printf("%d == %d의 결과: %d\n",x, y, x == y);
	printf("%d != %d의 결과: %d\n", x, y, x != y);
	printf("%d > %d의 결과: %d\n", x, y, x > y);
	printf("%d < %d의 결과: %d\n", x, y, x < y);
	printf("%d >= %d의 결과: %d\n", x, y, x >= y);
	printf("%d <= %d의 결과: %d\n", x, y, x <= y);
	*/

	/*삼항연산자*/
	int x, y;

	printf("첫번째 수는? ");
	scanf_s("%d", &x);
	printf("두번째 수는? ");
	scanf_s("%d", &y);

	printf("큰수 = %d \n", (x > y) ? x : y);
	printf("작은수 = %d \n", (x < y) ? x : y);



	return 0;
	
}