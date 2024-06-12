#include <stdio.h>

int main() {
	short num1;
	short num2;

	scanf("%d %d", &num1,&num2);
	if (num1 > num2) {
		printf(">\n");
	}
	else if (num1 < num2) {
		printf("<\n");
	}
	else {
		printf("==\n");
	}
}