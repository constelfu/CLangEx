#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// �л� ����ü ����

// ��ǥ ����ü ����
struct point {
	int x;
	int y;
};
// ��¥ ����ü ����
struct date {
	int year;
	int month;
	int day;
};
struct student {
	int num;
	char name[20];
	double grade;
	struct date birth;
};

void main() {

	struct student s1 = {20, "kim", 4.3};
	struct student s2 = {10, "lee", 4.5};
	struct student s3;

	//s1.num = 20;
	//strcpy(s1.name, "happy");
	//s1.grade = 4.3;
	
	printf("%d, %s, %.2f\n", s2.num, s2.name, s2.grade);

	s3.num = s1.num;
	strcpy(s3.name, s1.name);
	s3.grade = s1.grade;

	printf("%d, %s, %.2f\n", s3.num, s3.name, s3.grade);

	s1.birth.year = 1999;
	s1.birth.month = 5;
	s1.birth.day = 16;

	printf("��ȣ: %d\n", s1.num);
	printf("�̸�: %s\n", s1.name);
	printf("����: %d%0.2d%0.2d\n", s1.birth.year,s1.birth.month,s1.birth.day);

	struct point p1 = { 10, 20 };
	struct point p2 = { 20, 40 };

	printf("%d-%d\n", p1.x, p1.y);
	printf("%d-%d\n", p2.x, p2.y);

	p2 = p1;

	printf("%d-%d\n", p1.x, p1.y);
	printf("%d-%d\n", p2.x, p2.y);

	if ((p2.x == p1.x) && (p2.y == p2.y)) {
		printf("����\n");
	}
	else {
		printf("�ٸ�\n");
	}

}