#include <stdio.h>
/*
struct vector {
	float x;
	float y;
};
struct vector getvector(struct vector a, struct vector b) {
	struct vector result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return result;
}


void main() {
	struct vector a = { 2.0,3.0 };
	struct vector b = { 5.0,6.0 };
	struct vector sum;
	sum = getvector(a, b);
	printf("(%3.1f, %3.1f)\n", sum.x, sum.y);
}
*/
/*
struct student {
	int number;
	char name[10];
	struct date* dob;
};
struct date {
	int month;
	int day;
	int year;
};

void main() {
	
	//struct student* p;
	struct student s = { 2022001,"kimsuk" };
	struct date d = { 10, 5, 1999 };
	
	p = &s;
	printf("number: %d    name = %s\n", s.number, s.name);
	printf("number: %d    name = %s\n", (*p).number, (*p).name);
	printf("number: %d    name = %s\n", p->number, p->name);	
	
	s.dob = &d;
	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("%d년 %d월 %d일 생일\n", s.dob->year, s.dob->month, s.dob->day);
}
*/