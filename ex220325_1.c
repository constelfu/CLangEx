/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

struct student {
	int number;
	char name[10];
};

void main() {
	struct student s, t;		//����
	s.number = 20190001;
	strcpy(s.name, "kim");
	printf("s.number:%d   s.name:%s\n", s.number, s.name);

	printf("�л� �й� �Է�: ");
	scanf_s("%d", &t.number);
	printf("�л� �̸� �Է�: ");
	scanf_s("%s", &t.name, 4);
	printf("t.number: %d    t.name: %s\n", t.number, t.name);
}
*/