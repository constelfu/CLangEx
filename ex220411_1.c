#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {	// ����ü ����
	int num;
	char name[20];
	double grade;
};		
// �Լ��� ����ü�� ���� ���� �ֱ�(call by value)���� >> ����ü�� ��°�� ���� ��
// ������ ����� ����(call by reffernce)
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
	if (p1->num == p2->num) {	// ����ü �Լ� 
		return 1;
	}
	else {
		return 0;
	}
}		

struct student create() {		// ����ü ȣ���
	struct student s;
	s.num = 3;
	strcpy(s.name, "kim");
	s.grade = 3.5;

	return s;
}

union example {		// ����ü�� ����ü �񱳿�
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

	printf("�й�: %d\t", s.num);
	printf("�̸�: %s\t", s.name);
	printf("����: %.2f\n", s.grade);

	struct student* p;
	p = &s;
	
	printf("�й�: %d\t", (*p).num);
	printf("�̸�: %s\t", (*p).name);
	printf("����: %.2f\n", (*p).grade);

	printf("�й�: %d\t", p->num);
	printf("�̸�: %s\t", p->name);
	printf("����: %.2f\n", p->grade);
	*/


	struct student s1 = { 1,"park",4.3 };
	struct student s2 = { 2,"lee", 3.2 };
	struct student s3 = create();

	printf("�й�: %d\n", s3.num);
	printf("�̸�: %s\n", s3.name);
	printf("����: %.2f\n", s3.grade);

	if (equal(&s1, &s2) == 1) {
		printf("����ü ��ȣ ����\n");
	}
	else {
		printf("����ü ��ȣ �ٸ�\n");
	}

	union example e = { 'a' };

	printf("����ü ���: %c\t %d\t %d\t\n", e.c, e.i, e.j);

	e.i = 500;

	printf("����ü ���: %c\t %d\t %d\t\n", e.c, e.i, e.j);	// char�� �ִ� 255

	printf("\n\n\n");

	struct exam_s e1;
	union example e2;

	printf("����ü �޸� = %d\n", sizeof(e1));		// ����ü�� ����ü�� �޸� ��
	printf("����ü �޸� = %d\n", sizeof(e2));
	printf("\n\n\n");

	enum days today;
	today = TUE;

	printf("%d\n", today);
	
}