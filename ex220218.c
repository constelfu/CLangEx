#include <stdio.h>
/*
int i;
int x;
void f();

int main() {
	
	for (x = 0; x < 5; x++) {
		
		f();
		printf("\n");
	}

	return 0;
}

void f() {
	for (i = 0; i < 10; i++) {
		printf("#");
	}
}
*/

/*				//static과 register 
int sub();

int main() {
	register int i;
	for (i = 0; i < 3; i++) {
		sub();
	}


	return 0;
}

int sub() {
	int auto_count = 0;
	static int static_count = 0;
	auto_count++;
	static_count++;

	printf("auto_count = %d ", auto_count);
	printf("static_count = %d\n", static_count);

}
*/

/*
int all_files;				//전역변수이고 다른 파일에서 사용가능
static int those_files;		//전역변수이며 내 파일에서만 사용가능
extern void sub();

int main() {
	sub();

	return 0;
}
*/

/*
extern int y;
int main() {
	y = 7;
	printf("y = %d\n", y);



	return 0;
	
}
int y;
*/

extern void f2();

int main() {
	f2();
	return 0;
}