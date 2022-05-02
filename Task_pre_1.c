#include <stdio.h>

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main() {
	int a = 9, b = 5;
	int call = 0;
	int result = 0;			//리턴값을 받아줄 변수

	printf("다음 수를 계산합니다\na = %d, b = %d\n\n", a, b);
	printf("계산하고 싶은 연산을 골라 숫자를 입력: \n");
	printf("1. 더하기\n2. 빼기\n3. 곱하기\n4. 나머지\n");
	scanf_s("%d", &call);

	switch (call) {
	case 1: result = sum(a, b); break;
	case 2: result = sub(a, b); break;
	case 3: result = mul(a, b); break;
	case 4: result = div(a, b); break;
	default: printf("\a\n입력이 잘못되었습니다\n"); return 0;
	}

	printf("\n결과: %d\n", result);

	return 0;
}

int sum(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x % y;
}

/* // 리턴값 없이 그냥 함수 내에서 출력까지 하고 함수와 break만 써도 가능
void sum(int x, int y) {
	printf("\n결과: %d\n", x + y);
}
*/