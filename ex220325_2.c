/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

struct point {
	int x;
	int y;
};

void main() {
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;
	printf("p1좌표값 입력(x, y): ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("p2좌표값 입력(x, y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p2.y - p2.y;

	dist = sqrt(xdiff * xdiff + ydiff * ydiff);

	printf("두 점 사이의 거리는 %lf입니다", dist);

}
*/