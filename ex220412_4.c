#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 파일 생성해서 파일 내용 조작

int main() {
	FILE* fp = NULL;
	int number, count = 0;
	char name[20], fname[30];
	float score, total = 0.0;

	printf("성적 파일 명을 입력: ");
	scanf("%s", fname);
	if ((fp = fopen(fname, "w")) == NULL) {
		fprintf(stderr, "%s 파일을 찾지 못함", fname);
		exit(0);
	}
	while (1) {
		printf("학번 이름 성적 입력(음수 입력 시 종료): ");
		scanf("%d", &number);
		if (number < 0) {
			break;
		}
		scanf("%s %f", name, &score);

		fprintf(fp, "%d %s %.2f\n", number, name, score);
	}
	fclose(fp);

	if ((fp = fopen(fname, "r")) == NULL) {
		fprintf(stderr, "%s파일을 열 수 없음", fname);
	}
	while (!feof(fp)) {
		fscanf(fp, "%d %s %f", &number, name, &score);
		total += score;
		count++;
	}

	printf("\n평균 = %.2f\n\n", total / count);

	fclose(fp);

	return 0;
}