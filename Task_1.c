#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int random(int x);

int main() {
	int menu = 0;		//������ ����
	int menu2;			//������ �̸�
	char teuk1[10][20] = { "�Ұ��","���","�ߵ�����","������ũ","������","����","�Ʊ���","�ӹ�","��������" };
	char jjigae2[10][20] = { "�����","��ġ�","�δ��","���κ��","û�����","�����","�����","�������","��¡���" };
	char bab3[10][20] = { "ī��","�����","���Ƕ��̽�","��ġ������","��������","�����","ġŲ���䵤��","���θ�","��¡���" };
	char hejang4[10][20] = { "����","�ᳪ������","�Ͼ���","ȫ����","�����屹","���Ķ��","�Ż��̱�","�������屹","�������" };
	char myeon5[10][20] = { "���","�丶�佺�İ�Ƽ","ũ�����İ�Ƽ","�ø�","��ġ����","�������","Į����","�쵿","�ᱹ��" };
	char pyeon6[10][20] = { "������ġ","����ġ�佺Ʈ","������","�ø���","������","�����","�ֵ���","���������ö�","���/�����ʹ�" };
	char tang7[10][20] = { "������","�߰���","����","�Ұ�⹵��","�÷��걹","������","�߾���","�����","�뱸��" };
	char etc8[10][20] = { "�ʹ�","¥���","«��","��ǳ��","���ĵκ�","��ä","��Ÿ��","�ұ���","�ܹ���" };
	//printf�� �����ٰ� ���ڿ� �迭�� �ݺ�������ϱ�� ��.
	//�÷����Ϸ��ٰ� �迭�� �����ؼ� �� �ȿ��� ���� �� ���ٴ� ���� ���ݰ� ���������� ���� ������� ��
	do {
		printf("�԰� ���� ������ ������ ������\n\n");
		printf("1. Ư��\n2. �\n3. ����/������\n4. ����\n5. ��\n6. �����\n7. ��/��\n8. ��Ÿ\n");
		printf("==================\n");
		scanf_s("%d", &menu);
		printf("==================\n");
	} while ((1 > menu) || (menu > 8));
	
	
	if (menu == 1) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i+1, teuk1[i]);
		}
		printf("10 ����\n");										// ������� �޴� ǥ��, ������ ���� ���� ������ �迭 ������ ������ ��������
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n���� �޴��� %s�Դϴ�!\n", teuk1[tmp - 1]);	// ���� ���� �� ���, -1�� �迭���� ���̸� ��� �Է»� ���Ǹ� ����
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n���� �޴��� %s�Դϴ�!\n", teuk1[menu2 - 1]);
		}
		else {
			printf("\n�޴��� �ٽ� �Է����ּ���!\n");				// ���� ����
		}
	}
	else if (menu == 2) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, jjigae2[i]);
		}
		printf("10 ����\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n���� �޴��� %s�Դϴ�!\n", jjigae2[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n���� �޴��� %s�Դϴ�!\n", jjigae2[menu2 - 1]);
		}
		else {
			printf("\n�޴��� �ٽ� �Է����ּ���!\n");
		}
	}
	else if (menu == 3) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, bab3[i]);
		}
		printf("10 ����\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n���� �޴��� %s�Դϴ�!\n", bab3[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n���� �޴��� %s�Դϴ�!\n", bab3[menu2 - 1]);
		}
		else {
			printf("\n�޴��� �ٽ� �Է����ּ���!\n");
		}
	}
	else if (menu == 4) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, hejang4[i]);
		}
		printf("10 ����\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n���� �޴��� %s�Դϴ�!\n", hejang4[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n���� �޴��� %s�Դϴ�!\n", hejang4[menu2 - 1]);
		}
		else {
			printf("\n�޴��� �ٽ� �Է����ּ���!\n");
		}
	}
	else if (menu == 5) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, myeon5[i]);
		}
		printf("10 ����\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n���� �޴��� %s�Դϴ�!\n", myeon5[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n���� �޴��� %s�Դϴ�!\n", myeon5[menu2 - 1]);
		}
		else {
			printf("\n�޴��� �ٽ� �Է����ּ���!\n");
		}
	}
	else if (menu == 6) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, pyeon6[i]);
		}
		printf("10 ����\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n���� �޴��� %s�Դϴ�!\n", pyeon6[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n���� �޴��� %s�Դϴ�!\n", pyeon6[menu2 - 1]);
		}
		else {
			printf("\n�޴��� �ٽ� �Է����ּ���!\n");
		}
	}
	else if (menu == 7) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, tang7[i]);
		}
		printf("10 ����\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n���� �޴��� %s�Դϴ�!\n", tang7[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n���� �޴��� %s�Դϴ�!\n", tang7[menu2 - 1]);
		}
		else {
			printf("\n�޴��� �ٽ� �Է����ּ���!\n");
		}
	}
	else if (menu == 8) {
		for (int i = 0; i < 9; i++) {
			printf("%d  %s\n", i + 1, etc8[i]);
		}
		printf("10 ����\n");
		printf("==================\n");
		scanf_s("%d", &menu2);
		printf("==================\n");
		if (menu2 == 10) {
			int tmp = 0;
			tmp = random(menu2);
			printf("\n���� �޴��� %s�Դϴ�!\n", etc8[tmp - 1]);
		}
		else if ((1 <= menu2) && (menu2 <= 9)) {
			printf("\n���� �޴��� %s�Դϴ�!\n", etc8[menu2 - 1]);
		}
		else {
			printf("\n�޴��� �ٽ� �Է����ּ���!\n");
		}
	}
	return 0;
}

int random(int x) {							// ���� printf���� ������� ���Ǹ� ���� 1~9���� �Է��Ͽ� 0�� �迭�������� ����� �����ϵ��� �Ͽ�����,
	srand((unsigned)time(NULL));			// rand�� ������ �����ϴ� �������� 0�� �����ϰ� �Ǹ� 0 - 1�� ����ϰ� �Ǿ� -1�迭�� ����϶�� ����� �Ǿ� �����Ⱚ�� ��µȴ�
	int i = (rand() % 9)+1;					// �׷��� ���ʺ��� ������ ���ϵ� ���� ������ ���ڸ� �Է��� ���� ���� 1~9�� �����Ͽ� 
	return i;								// ����� �״�� 0~8�迭 ������ ��µǵ��� �ߴ� �׷��� �� ��� �������� ù��° �迭�� ���� ��쿡�� ������ ���� �ʾҴ�
}											
											