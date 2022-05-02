#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define STU_NUMBER 1
#define REG_NUMBER 2

struct student {
	int type;
	union {
		int stunum;
		char regnum[15];
	}id;
	char name[20];
};

void print(struct student s) {
	switch (s.type) {
	case STU_NUMBER:
		printf("학번: %d\n", s.id.stunum);
		printf("이름: %s\n", s.name);
		break;
	case REG_NUMBER:
		printf("주민번호: %s\n", s.id.regnum);
		printf("이름: %s\n", s.name);
		break;
	default:
		printf("type확인바랍니다\n");
	}
}

void main() {
	struct student s1, s2;
	s1.type = STU_NUMBER;
	s1.id.stunum = 20201212;
	strcpy(s1.name, "Tom");
	s2.type = REG_NUMBER;
	strcpy(s2.id.regnum, "991212-1323333");
	strcpy(s2.name, "annie");
	print(s1);
	print(s2);




}