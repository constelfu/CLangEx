#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ���� �����ؼ� ���� ���� ����

int main() {
	FILE* fp = NULL;
	int number, count = 0;
	char name[20], fname[30];
	float score, total = 0.0;

	printf("���� ���� ���� �Է�: ");
	scanf("%s", fname);
	if ((fp = fopen(fname, "w")) == NULL) {
		fprintf(stderr, "%s ������ ã�� ����", fname);
		exit(0);
	}
	while (1) {
		printf("�й� �̸� ���� �Է�(���� �Է� �� ����): ");
		scanf("%d", &number);
		if (number < 0) {
			break;
		}
		scanf("%s %f", name, &score);

		fprintf(fp, "%d %s %.2f\n", number, name, score);
	}
	fclose(fp);

	if ((fp = fopen(fname, "r")) == NULL) {
		fprintf(stderr, "%s������ �� �� ����", fname);
	}
	while (!feof(fp)) {
		fscanf(fp, "%d %s %f", &number, name, &score);
		total += score;
		count++;
	}

	printf("\n��� = %.2f\n\n", total / count);

	fclose(fp);

	return 0;
}