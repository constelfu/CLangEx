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
		printf("1. �Ҽ� / 2. ���� / 3. ����: ");
		scanf("%d", &type);
		book[i].type = type;
		printf("å�̸�: ");
		scanf("%s", &book[i].title);
		printf("����: ");
		scanf("%s", &book[i].author);
		printf("���ǻ�: ");
		scanf("%s", &book[i].publisher);
		printf("���ǳ⵵: ");
		scanf("%d", &book[i].year);
		printf("����: ");
		scanf("%d", &book[i].price);
	}
	printf("����ұ��? 1 / 0: ");
	scanf("%d", &question);
	if (question == 1) {
		printf("===============å ����====\n\n");
		printf("å����\tå����\t����\t���ǻ�\t���ǳ⵵\t����\n");
		for (i = 0; i < 3; i++) {
			printf("%d\t%s\t%s\t%s\t%d\t%d\n", book[i].type, book[i].title,book[i].author,book[i].publisher,book[i].year, book[i].price);
		}
		
	}
	else {
		printf("��\n");
	}
}