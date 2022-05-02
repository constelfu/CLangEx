#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct books {
	int type;
	char title[20];
	char author[20];
	char publisher[20];
	int year;
	int price;
};

void main() {
	struct books book[3];
	int type;
	int i;
	int question;
	for (i = 0; i < 3; i++) {
		printf("1. 소설 / 2. 잡지 / 3. 참고서: ");
		scanf("%d", &type);
		book[i].type = type;
		printf("책이름: ");
		scanf("%s", &book[i].title);
		printf("저자: ");
		scanf("%s", &book[i].author);
		printf("출판사: ");
		scanf("%s", &book[i].publisher);
		printf("출판년도: ");
		scanf("%d", &book[i].year);
		printf("가격: ");
		scanf("%d", &book[i].price);
	}
	printf("출력할까요? 1 / 0: ");
	scanf("%d", &question);
	if (question == 1) {
		printf("===============책 정보====\n\n");
		printf("책종류\t책제목\t저자\t출판사\t출판년도\t가격\n");
		for (i = 0; i < 3; i++) {
			printf("%d\t%s\t%s\t%s\t%d\t%d\n", book[i].type, book[i].title,book[i].author,book[i].publisher,book[i].year, book[i].price);
		}
		
	}
	else {
		printf("끝\n");
	}
}