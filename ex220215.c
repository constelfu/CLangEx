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
				//�ζǰ� (45���� ������µž� �ؼ� %45 �̿�)
	int i;		// 0�� ��µǸ� �� �ż� 1+
	//seed�� (Ÿ���Լ� ���� ���� ��� �ٲ�)
	srand((unsigned)time(NULL));
	for (i = 0; i < 6; i++) {
		printf("%d ", 1+rand()%45);
	}
	*/
	/*
	int kor, eng, math;
	int total;
	double average;
	printf("������ ���� �Է�: ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	total = tot(kor, eng, math);
	average = avg(total);
	printall();
	printf("%3d %5d %5d %5d %6.1lf\n", kor, eng, math, total, average);
	*/

	/*
	int a, b, c;
	printf("�� ���� ����: ");
	scanf_s("%d %d", &a, &b);
	c = differ(a, b);
	printf("%d�� %d�� ����: %d", a, b, c);
	*/

	char ch;
	int n;
	printf("���ڿ� �ݺ�Ƚ��: ");
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
	printf("          <����ǥ>          \n");
	printf("============================\n");
	printf("����  ����  ����  ����  ���\n");
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