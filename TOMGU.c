/*
2022/01/30
김병관

*/
#include <stdio.h>

int main() {
	int nail = 0;
	int count = 0;

	while (nail < 100) {
		nail += 5;													// nail = nail + 5;와 동일
		printf("달팽이가 이동한 거리 = %d m\n", nail);
		(nail < 50) ? (nail -= 1) : (nail -= 2);					//되도록 괄호로 가독성을 높일 것
		printf("달팽이가 이동하고 미끄러진 거리 = %d m\n", nail);
		printf("===================\n");

		count++;
	}

	printf("이동한 횟수 = %d회\n", count);

	return 0;

}