#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10


int main() {
	//int i;
	/*				// 1. �������� �迭�� ���ٹ��
	int s[SIZE];
	s[0] = 10;
	s[1] = 20;
	s[2] = 30;

	for (i = 0; i < SIZE; i++) {
		printf("s[%d] = %d \n", i, s[i]);
	}
	*/

	/*				// 2. �迭����� ���ÿ� �Ҵ��ϴ� ���
	int t[SIZE] = { 1,2 };			// �Ҵ���� ���� ��� 0 ��ġ
	for (i = 0; i < SIZE; i++) {
		printf("t[%d] = %d \n", i, t[i]);
	}
	*/

	/*				// 3. srand()�Լ��� �̿��ϴ� ���
	srand((unsigned)time(NULL));
	int ss[ SIZE ];
	for (i = 0; i < SIZE; i++) {
		ss[i] = (rand() % 100) + 1;
		printf("ss[%d] = %d\n", i, ss[i]);
	}
	*/

	/*					// 4. �Է��Ͽ� �迭���� �Ҵ��ϴ� ���
	int jumsu[SIZE];
	printf("3���� �� �Է�\n");
	for (i = 0; i < SIZE; i++) {
		scanf_s("%d", &jumsu[i]);
	}
	for (i = 0; i < SIZE; i++) {
		printf("jumsu[%d] = %d\n", i, jumsu[i]);
	}
	*/

	/*					// �迭 ���� �ּڰ��� �ִ�
	int price[SIZE] = { 0 };
	int i, min = 0, max = 0;
	srand((unsigned)time(NULL));
	

	for (i = 0; i < SIZE; i++) {
		price[i] = (rand() % 100) + 1;
		printf("%-3d", price[i]);
	}
	printf("\n==============================\n");
	min = price[0];
	max = price[0];

	for (i = 0; i < SIZE; i++) {
		if (price[i] < min) {
			min = price[i];
		}
	}
	printf("�迭 ���� �ּڰ� = %d\n", min);
	printf("==============================\n");

	for (i = 0; i < SIZE; i++) {
		if (price[i] > max) {
			max = price[i];
		}
	}
	printf("�迭 ���� �ִ� = %d", max);
	*/

	/*				// �л� ������ ��� ���ϱ�
	int jumsu[SIZE];
	int i, sum = 0;
	double avg;
	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		jumsu[i] = (rand() % 100) + 1;
		printf("%-3d", jumsu[i]);
	}
	printf("==============================\n");
	for (i = 0; i < SIZE; i++) {
		sum += jumsu[i];
		avg = (double)(sum / 10);
		printf("���� = %d\n��� = %.2lf\n", sum, avg);
	}
	*/

	/*
	char answer;
	int seat, i;
	int seats[SIZE] = { 0 };
	
	while (1) {
		printf("�¼��� �����Ͻðڽ��ϱ�?(y/n)");
		scanf_s(" %c", &answer, 1);
		if (answer == 'y') {
			printf("\n=============================\n");
			for (i = 0; i < SIZE; i++) {
				printf("%3d", i + 1);
			}
			printf("\n=============================\n");
			for (i = 0; i < SIZE; i++) {
				printf("%3d", seats[i]);
			}
			printf("\n=============================\n");
			printf("\n���ϴ� �¼���ȣ �Է�: ");
			scanf_s("%d", &seat);
			if (seat <= 0 || seat > SIZE) {
				printf("1���� 10������ ��ȣ�� �Է°����մϴ�");
				continue;
			}
			if (seats[seat - 1] == 0) {    //������ ��
				seats[seat - 1] = 1;
				printf("����Ϸ�\n");
			}
			else {
				printf("���� �¼��Դϴ�\n");
			}
		} //yes
		else if (answer == 'n') {
			printf("bye\n");
			return 0;
		}
	}
	*/
	
	/*				// 2���� �迭������ �¼� ����
	char answer;
	int seatr, seatc;
	int i, j;
	int seats[SIZE][SIZE];
	printf("===����===\n   ");
	for (i = 0; i < SIZE; i++) {
		printf("%3d", i + 1);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++) {
		printf("%3d", i + 1);
		for (j = 0; j < SIZE; j++) {
			seats[i][j] = 0;
			printf("%3d", seats[i][j]);
		} printf("\n");//j
	} // i
	while (1) {
		printf("�¼��� �����Ͻðڽ��ϱ�?(y/n): ");
		scanf_s(" %c", &answer, 1);

		if (answer == 'y') {
			printf("���Ͻô� �¼� ���: ");
			scanf_s("%d %d", &seatr, &seatc);
			if ((seatr <= 0 || seatr > SIZE) && (seatc <= 0 || seatc > SIZE)) {
				printf("�¼��� �Է¹����� 1~10�Դϴ�\n");
				continue;
			}
			if (seats[seatr - 1][seatc - 1] == 0) {
				seats[seatr - 1][seatc - 1] = 1;
				printf("����Ϸ�\n");
				printf("===����===\n   ");
				for (i = 0; i < SIZE; i++) {
					printf("%3d", i + 1);
				}
				printf("\n");
				for (i = 0; i < SIZE; i++) {
					printf("%3d", i + 1);
					for (j = 0; j < SIZE; j++) {
						//seats[i][j] = 0;
						printf("%3d", seats[i][j]);
					} printf("\n");//j
				} // i
			} // �����¼� 
			else {
				printf("����Ұ��մϴ�\n");
			}
		} // yes
		else if (answer == 'n') {
			printf("\nbye\n");
			return 0;
		} // no
	}
	*/
	return 0;
}


