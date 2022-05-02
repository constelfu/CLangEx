#include <stdio.h>

/*
int tmp;
void funcTmp();

void main() {
	int i = 0;
	for (i = 0; i < 5; i++) {
		tmp = 1;
		printf("%3d in main()\n", tmp);
		tmp++;
	}
	printf("%3d in main()\n", tmp);
	funcTmp();
}
void funcTmp() {
	printf("%3d in funcTmp()\n", tmp);
}
*/

int tmp = 1;
void funcTmp();

int main() {
	int tmp = 10;
	printf("tmp = %d in main()\n", tmp);
	funcTmp();
	printf("tmp = %d in main()\n", tmp);

	return 0;
}
void funcTmp() {
	int tmp = 99;
	printf("tmp = %d in main()\n", tmp);
}