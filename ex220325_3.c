/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct date {
	int year;
	int month;
	int day;
};

struct student {
	int number;
	char name[10];
	struct date birth;
	double grade;
};

void main() {
	struct student s;
	s.number = 12345;
	strcpy(s.name, "kim");
	s.grade = 4.3;
	s.birth.year = 2000;
	s.birth.month = 3;
	s.birth.day = 5;
	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);
	printf("����: %d�� %d�� %d��\n", s.birth.year, s.birth.month, s.birth. day);
}
*/