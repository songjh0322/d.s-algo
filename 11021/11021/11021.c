#include <stdio.h>

int main() {
	int count;
	int i;
	scanf("%d", &count);
	unsigned short num1[count], num2[count];

	// �Է��� ����
	for (i = 0; i < count; i++) {
		scanf("%d %d", &num1[i], &num2[i]);
	}

	// ����� �Է��� �������� ���
	for (i = 0; i < count; i++) {
		printf("Case #%d: %hu\n", i + 1, num1[i] + num2[i]);
	}

	return 0;
}