/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[10];
	double grade;
};

void main() {
	struct student list[100];
	list[2].number = 20190111;
	strcpy(list[2].name, "hong");
	list[2].grade = 4.5;
	for (int i = 0; i < 3; i++) {
		printf("학번: ");
		scanf("%d", &list[i].number);

		printf("이름: ");
		scanf("%s", &list[i].name);

		printf("학점: ");
		scanf("%lf", &list[i].grade);
	}
	for (int i = 0; i < 3; i++) {
		printf("학번: %10d, 이름: %20s, 학점: %lf \n",
			list[i].number, list[i].name, list[i].grade);
	}



}
*/