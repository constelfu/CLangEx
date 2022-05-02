#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {	// 구조체 선언
	int num;
	char name[20];
	double grade;
};		
// 함수에 구조체를 직접 값을 넣기(call by value)보단 >> 구조체를 통째로 쓰게 됨
// 포인터 사용이 좋음(call by reffernce)
/*
int equal(struct student s1, struct student s2) {
	if (s1.num == s2.num) {
		return 1;
	}
	else {
		return 0;
	}
}
*/
int equal(struct student *p1, struct student *p2) {	
	if (p1->num == p2->num) {	// 구조체 함수 
		return 1;
	}
	else {
		return 0;
	}
}		

struct student create() {		// 구조체 호출용
	struct student s;
	s.num = 3;
	strcpy(s.name, "kim");
	s.grade = 3.5;

	return s;
}

union example {		// 공용체와 구조체 비교용
	char c;
	int i;
	int j;
};
struct exam_s {
	char c;
	int i;
	int j;
};

enum days {SUN = 7, MON = 2, TUE, WED, THU, FRI, SAT};


void main() {
	/*
	struct student s = { 24,"kim",4.3 };

	printf("학번: %d\t", s.num);
	printf("이름: %s\t", s.name);
	printf("학점: %.2f\n", s.grade);

	struct student* p;
	p = &s;
	
	printf("학번: %d\t", (*p).num);
	printf("이름: %s\t", (*p).name);
	printf("학점: %.2f\n", (*p).grade);

	printf("학번: %d\t", p->num);
	printf("이름: %s\t", p->name);
	printf("학점: %.2f\n", p->grade);
	*/


	struct student s1 = { 1,"park",4.3 };
	struct student s2 = { 2,"lee", 3.2 };
	struct student s3 = create();

	printf("학번: %d\n", s3.num);
	printf("이름: %s\n", s3.name);
	printf("학점: %.2f\n", s3.grade);

	if (equal(&s1, &s2) == 1) {
		printf("구조체 번호 같음\n");
	}
	else {
		printf("구조체 번호 다름\n");
	}

	union example e = { 'a' };

	printf("공용체 출력: %c\t %d\t %d\t\n", e.c, e.i, e.j);

	e.i = 500;

	printf("공용체 출력: %c\t %d\t %d\t\n", e.c, e.i, e.j);	// char는 최대 255

	printf("\n\n\n");

	struct exam_s e1;
	union example e2;

	printf("구조체 메모리 = %d\n", sizeof(e1));		// 구조체와 공용체의 메모리 비교
	printf("공용체 메모리 = %d\n", sizeof(e2));
	printf("\n\n\n");

	enum days today;
	today = TUE;

	printf("%d\n", today);
	
}