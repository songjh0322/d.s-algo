#include <stdio.h>

int main(void) {
	unsigned long totalPrice;
	unsigned short num1;
	unsigned int prodPrice;
	unsigned long sum = 0;
	unsigned char num2;
	scanf("%lu", &totalPrice);
	scanf("%hu", &num1);

	for (int i = 0; i < num1; i++) {
		scanf("%u %hhu", &prodPrice, &num2);
		sum = sum + (prodPrice * num2);
	}
	if (totalPrice == sum) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

}