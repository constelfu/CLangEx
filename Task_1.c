#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int random(int x);

int main() {
	int menu = 0;		//음식의 종류
	int menu2;			//음식의 이름
	char teuk1[10][20] = { "불고기","찜닭","닭도리탕","스테이크","월남쌈","수육","아귀찜","쌈밥","낙지볶음" };
	char jjigae2[10][20] = { "된장찌개","김치찌개","부대찌개","순두부찌개","청국장찌개","동태찌개","비지찌개","고추장찌개","오징어찌개" };
	char bab3[10][20] = { "카레","비빔밥","오므라이스","김치볶음밥","제육덮밥","연어덮밥","치킨마요덮밥","돈부리","오징어덮밥" };
	char hejang4[10][20] = { "순댓국","콩나물국밥","북엇국","홍합탕","뼈해장국","대파라면","매생이국","선지해장국","우거지국" };
	char myeon5[10][20] = { "라멘","토마토스파게티","크림스파게티","냉면","잔치국수","비빔국수","칼국수","우동","콩국수" };
	char pyeon6[10][20] = { "샌드위치","프렌치토스트","떡볶이","시리얼","샐러드","밥버거","핫도그","편의점도시락","김밥/유부초밥" };
	char tang7[10][20] = { "육개장","닭개장","떡국","소고기뭇국","시래깃국","갈비탕","추어탕","삼계탕","대구탕" };
	char etc8[10][20] = { "초밥","짜장면","짬뽕","깐풍기","마파두부","잡채","팟타이","쌀국수","햄버거" };
	//printf로 쓰려다가 문자열 배열로 반복문출력하기로 함.
	//올랜덤하려다가 배열을 통합해서 그 안에서 돌릴 수 없다는 것을 깨닫고 개별적으로 랜덤 돌리기로 함
	do {
		printf("먹고 싶은 음식의 종류를 고르세요\n\n");
		printf("1. 특식\n2. 찌개\n3. 덮밥/볶음밥\n4. 해장\n5. 면\n6. 간편식\n7. 국/탕\n8. 기타\n");
		printf("==================\n");
		scanf_s("%d", &menu);
		printf("==================\n");
	} while ((1 > menu) || (menu > 8));
	
	
	if (menu == 1) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i+1, teuk1[i]);
		}
		printf("10 랜덤\n");										// 여기까지 메뉴 표시, 랜덤을 따로 놓은 이유는 배열 내에서 난수를 돌리려고
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n고르신 메뉴는 %s입니다!\n", teuk1[tmp - 1]);	// 랜덤 선택 시 출력, -1은 배열과의 차이를 고려 입력상 편의를 위해
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n고르신 메뉴는 %s입니다!\n", teuk1[menu2 - 1]);
		}
		else {
			printf("\n메뉴를 다시 입력해주세요!\n");				// 오류 방지
		}
	}
	else if (menu == 2) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, jjigae2[i]);
		}
		printf("10 랜덤\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n고르신 메뉴는 %s입니다!\n", jjigae2[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n고르신 메뉴는 %s입니다!\n", jjigae2[menu2 - 1]);
		}
		else {
			printf("\n메뉴를 다시 입력해주세요!\n");
		}
	}
	else if (menu == 3) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, bab3[i]);
		}
		printf("10 랜덤\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n고르신 메뉴는 %s입니다!\n", bab3[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n고르신 메뉴는 %s입니다!\n", bab3[menu2 - 1]);
		}
		else {
			printf("\n메뉴를 다시 입력해주세요!\n");
		}
	}
	else if (menu == 4) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, hejang4[i]);
		}
		printf("10 랜덤\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n고르신 메뉴는 %s입니다!\n", hejang4[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n고르신 메뉴는 %s입니다!\n", hejang4[menu2 - 1]);
		}
		else {
			printf("\n메뉴를 다시 입력해주세요!\n");
		}
	}
	else if (menu == 5) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, myeon5[i]);
		}
		printf("10 랜덤\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n고르신 메뉴는 %s입니다!\n", myeon5[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n고르신 메뉴는 %s입니다!\n", myeon5[menu2 - 1]);
		}
		else {
			printf("\n메뉴를 다시 입력해주세요!\n");
		}
	}
	else if (menu == 6) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, pyeon6[i]);
		}
		printf("10 랜덤\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n고르신 메뉴는 %s입니다!\n", pyeon6[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n고르신 메뉴는 %s입니다!\n", pyeon6[menu2 - 1]);
		}
		else {
			printf("\n메뉴를 다시 입력해주세요!\n");
		}
	}
	else if (menu == 7) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, tang7[i]);
		}
		printf("10 랜덤\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n고르신 메뉴는 %s입니다!\n", tang7[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n고르신 메뉴는 %s입니다!\n", tang7[menu2 - 1]);
		}
		else {
			printf("\n메뉴를 다시 입력해주세요!\n");
		}
	}
	else if (menu == 8) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, etc8[i]);
		}
		printf("10 랜덤\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n고르신 메뉴는 %s입니다!\n", etc8[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n고르신 메뉴는 %s입니다!\n", etc8[menu2 - 1]);
		}
		else {
			printf("\n메뉴를 다시 입력해주세요!\n");
		}
	}
	return 0;
}

int random(int x) {							// 위의 printf에서 입출력의 편의를 위해 1~9만을 입력하여 0의 배열에서부터 출력이 가능하도록 하였으나,
	srand((unsigned)time(NULL));			// rand의 난수를 생성하는 과정에서 0을 생성하게 되면 0 - 1로 출력하게 되어 -1배열을 출력하라는 명령이 되어 쓰레기값이 출력된다
	int i = (rand() % 9)+1;					// 그래서 애초부터 난수가 리턴될 때도 고정된 숫자를 입력할 때와 같이 1~9를 리턴하여 
	return i;								// 출력은 그대로 0~8배열 내에서 출력되도록 했다 그렇게 한 결과 랜덤으로 첫번째 배열이 나올 경우에도 오류가 나지 않았다
}											
											