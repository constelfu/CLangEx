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
	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);
	printf("생일: %d년 %d월 %d일\n", s.birth.year, s.birth.month, s.birth. day);
}
*/