#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <time.h>
/*
int tot(int, int, int);
double avg(int);
void printall();
*/

/*
int differ(int x, int y);
*/

void chprint(char ch, int n);

int main() {
	/*
				//로또값 (45까지 난수출력돼야 해서 %45 이용)
	int i;		// 0이 출력되면 안 돼서 1+
	//seed값 (타임함수 포함 난수 계속 바뀜)
	srand((unsigned)time(NULL));
	for (i = 0; i < 6; i++) {
		printf("%d ", 1+rand()%45);
	}
	*/
	/*
	int kor, eng, math;
	int total;
	double average;
	printf("국영수 점수 입력: ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	total = tot(kor, eng, math);
	average = avg(total);
	printall();
	printf("%3d %5d %5d %5d %6.1lf\n", kor, eng, math, total, average);
	*/

	/*
	int a, b, c;
	printf("두 개의 정수: ");
	scanf_s("%d %d", &a, &b);
	c = differ(a, b);
	printf("%d와 %d의 차이: %d", a, b, c);
	*/

	char ch;
	int n;
	printf("문자와 반복횟수: ");
	scanf_s("%c", &ch, 1);
	scanf_s("%d", &n);
	chprint(ch, n);

	return 0;
}
/*
int tot(int kor, int eng, int math) {
	int total = kor + eng + math;
	return total;
}
double avg(int total) {
	double result = total / 3;
	return result;
}
void printall(void) {
	printf("          <성적표>          \n");
	printf("============================\n");
	printf("국어  영어  수학  총점  평균\n");
	printf("============================\n");
}
*/

/*
int differ(int x, int y) {
	if (x > y)
		return (x - y);
	else
		return (y - x);
}
*/

void chprint(char ch, int n) {
	int i;
	for (i = 1; i <= n; i++) {
		printf("%c", ch);
	}
}