#include <stdio.h>

int main() {
	
	int n;
	int level;

	/*
	printf("정수입력(1~5): ");
	scanf_s("%d", &n);

	switch (n) {
	    case 1: printf("1번\n\n\n"); break;
	    case 2: printf("2번\n\n\n"); break;
	    case 3: printf("3번\n\n\n"); break;
		default: printf("1~3번만 써주세요");
	}
	*/

	printf("정수입력(0~2): ");
	scanf_s("%d", &level);

	switch (level) {
	case 0: printf("delete 권한 있음\n");
	case 1: printf("write 권한 있음\n");
	case 2: printf("read 권한 있음\n"); break;
	default: printf("0~2까지만\n");
	}
	
	return 0;

}