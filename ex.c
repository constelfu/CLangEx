/* �⺻���� */
// �鿩����� ��1ȸ, �Ϲ� ������ �����̽���
/*

	%: ������ ��Ÿ��
 %d: 10�� ������ ��� (decimal)
 %f: �Ǽ��� ��� (float)
 %c: ���ڷ� ��� (character)
 %s: ���ڿ��� ��� (string)
 %lf: float�� double�� (long float)

 \0: �ι��� = ���ڿ��� ��
 \n �ٹٲ� = ���� ������ ���� ��ġ�� Ŀ�� �̵�
 \t �ܹ��� = ���� �� ��ġ�� Ŀ�� �̵�
 \' ��������ǥ = ������ ��������ǥ ���
 \" ū����ǥ = ������ ū����ǥ ���
 \\ �������� = ������ �������� ���

 scanf("%d, &x"); &x > ���� ������ ������ �ּ�
 */
#include <stdio.h>

int main() 
{
	int   iData;	//���� ����
	char  cData;	//���� ����
	double fData;	//���� ����

	int num1;
	double num2, result;
	/*
	int sum;
	int a, b;	
	*/

	iData = 5;		// ������ ���� ����
	cData = 'a';	// ������ ���� ����
	fData = 1.1;	// ������ ���� ����

	//a = 6, b = 1;		//���� ���� & ���� == > �ʱ�ȭ
	num1 = iData + iData;
	num2 = iData - fData;
	result = num1 + num2;
	
	//scanf("")

	/*
	sum = a + b;
	printf("�� ���� ��: %d\n", sum); 
	*/
	printf("%d / %.1lf = %.1lf\n\n", num1, num2, result);

	return 0; // �Լ��� ��ȯ
}