#include <stdio.h>
/*
int max(int, int);		// 함수원형
*/

/*
void add(int x, int y);	// 함수원형
void sub(int x, int y);
void mul(int x, int y);
void div(int x, int y);
*/

/*
void hamber();
void jajang();
void kimbab();
void sandwitch();
int menu();
void select(int);
*/

int main() {
	/*
	int result = max(1, 3);				// 함수호출
	printf("큰수는 %d\n", result);
	*/
	/*
	int a = 5, b = 10;					// 함수호출
	add(a, b);
	sub(a, b);
	mul(a, b);
	div(a, b);
	*/

	/*
	int i = 1;
	while (i < 5) {
		int choice = menu();
		select(choice);
		i++;
	}
	*/

	return 0;
}
/*
int max(int a, int b) {			// 함수정의
	
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
	

	// return (a > b) ? a : b;
}*/
/*
void add (int x, int y) {						// 함수정의
	int result = x + y;
	printf("%d + %d = %d\n", x, y, result);
}
void sub(int x, int y) {
	int result = x - y;
	printf("%d - %d = %d\n", x, y, result);
}
void mul(int x, int y) {
	int result = x * y;
	printf("%d * %d = %d\n", x, y, result);
}
void div(int x, int y) {
	int result = x / y;
	printf("%d / %d = %d\n", x, y, result);
}
*/

/*
void hamber();
void jajang();
void kimbab();
void sandwitch();
int menu() {
	int choice;
	printf("======<메뉴선택>======\n");
	printf("1. 햄버거  \n");
	printf("2. 자장면  \n");
	printf("3. 김밥    \n");
	printf("4. 샌드위치\n");
	printf("메뉴입력(1~4): \n");
	scanf_s("%d", &choice);
	return (choice);
}
void select(int choice) {
	switch (choice) {
	case 1: hamber(); break;
	case 2: jajang(); break;
	case 3: kimbab(); break;
	case 4: sandwitch(); break;
	default: printf("메뉴를 다시 골라 주세요\n");
	}
}
void hamber() {
	int price;
	printf("햄버거 종류를 고르시오\n1--불고기버거\n2--새우버거");
	scanf_s("%d", &price);
	switch (price) {
	case 1: printf("불고기버거의 가격은 4000원입니다\n"); break;
	case 2: printf("새우버거의 가격은 4500원입니다\n"); break;
	default: printf("다시 선택해주세요\n"); break;	
	}
}
void jajang() {
	int price;
	printf("자장면 종류를 고르시오\n1--짜장면\n2--간짜장\n");
	scanf_s("%d", &price);
	switch (price) {
	case 1: printf("짜장면 가격은 5000원입니다\n"); break;
	case 2: printf("간짜장 가격은 6000원입니다\n"); break;
	default: printf("다시 선택해주세요\n"); break;
	}
}
void kimbab() {
	int price;
	printf("자장면 종류를 고르시오\n1--짜장면\n2--간짜장\n");
	scanf_s("%d", &price);
	switch (price) {
	case 1: printf("짜장면 가격은 5000원입니다\n"); break;
	case 2: printf("간짜장 가격은 6000원입니다\n"); break;
	default: printf("다시 선택해주세요\n"); break;
	}
}
void sandwitch() {
	int price;
	printf("자장면 종류를 고르시오\n1--짜장면\n2--간짜장\n");
	scanf_s("%d", &price);
	switch (price) {
	case 1: printf("짜장면 가격은 5000원입니다\n"); break;
	case 2: printf("간짜장 가격은 6000원입니다\n"); break;
	default: printf("다시 선택해주세요\n"); break;
	}
}
*/