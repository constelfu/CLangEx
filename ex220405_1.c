#include <stdio.h>
//#define ASSERT(exp) { if(!(exp))\
	{printf("가정(" #exp ")이 소스파일 %s %d번째 줄에서 오류\n"\
		,__FILE__, __LINE__), exit(1);}}
//#define INFO 2

#define DEBUG
#define USA

//int average(int x, int y);

#ifndef PI
#define PI 3.14
#endif

#ifndef SQU
#define SQU(x) ((x)*(x))
#endif

void area(double r) {
	double result = 0.0;
#ifdef DEBUG
#ifdef USA
	result = r * r * PI;
	printf("area = %lf\n", result);
#else
	result = r * r * PI;
	printf("면적 = %lf\n", result);
#endif
#endif

}

int main() {
	/*
	int sum = 0;
	ASSERT(sum == 1);
	*/
	/*
	printf("file name = %s\n", __FILE__);
	printf("date = %s\n", __DATE__);
	printf("time = %s\n", __TIME__);
	printf("Line = %d\n", __LINE__);
	*/
	/*
	char* data;
#if(INFO == 1) 
	data = "wonderful";
	printf("data = %s\n", data);
#elif(INFO == 2)
	data = "try";
	printf("data = %s\n", data);
#else
	printf("data의 내용은 없음\n");
#endif
*/
	//average(5, 6);
	area(9);



	return 0;
}
/*
int average(int x, int y) {
#ifdef DEBUG
	printf("x = %d, y = %d\n", x, y);
#endif
#undef DEBUG
#ifdef DEBUG
	printf("x = %d, y = %d\n", x, y);
#endif
	printf("기존 처리 방식으로 실행되는 줄\n");
}
*/