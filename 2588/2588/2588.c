#include <stdio.h>

int main() {

	int num1;
	int num2;
	//printf("ù ��° �� �ڸ����� �Է��ϼ���: ");
	scanf("%d", &num1);
	//printf("�� ��° �� �ڸ����� �Է��ϼ���: ");
	scanf("%d", &num2);
	int num3, num4, num5, num6;
	int num7, num8, num9;
	int num10;
	num3 = num2 / 100; //���� �ڸ���
	num4 = (num2 - num3 * 100) / 10; //���� �ڸ���
	num5 = num2 - num3 * 100 - num4 * 10; //���� �ڸ���
	num7 = num1 * num5;
	num8 = num1 * num4;
	num9 = num1 * num3;
	num10 = num7 + (num8 * 10) + (num9 * 100);
	printf("%d\n", num7);
	printf("%d\n", num8);
	printf("%d\n", num9);
	printf("%d\n", num10);
	

	return 0;
}