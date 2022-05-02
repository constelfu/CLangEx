#include <stdio.h>

/*
enum days {SUN, MON, THE, WED, THU, FRI, SAT};
char* dayname[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

union example {
	int i;
	char c;
};
union ipaddress {
	unsigned long laddr;
	unsigned char saddr[4];
};


void main() {
	union ipaddress addr;
	addr.saddr[0] = 1;
	addr.saddr[1] = 0;
	addr.saddr[2] = 0;
	addr.saddr[3] = 127;

	printf("%x\n", addr.laddr);

	for (int i = 0; i < 4; i++) {
		printf("출력: %d \n", addr.saddr[i]);
	}


	union example v;
	v.c = 'A';
	printf("v.c = %c, v.i = %d\n", v.c, v.i);
	v.i = 10000;
	printf("v.c = %c, v.i = %d\n", v.c, v.i);
	
	enum days d;
	d = WED;
	printf("%d번째 요일은 %s입니다\n", d, dayname[d]);

}
*/