#include <stdio.h>

int main() {
	unsigned short arr[9];
	unsigned short max;
	int index = 0;
	int i;
	for (i = 0; i < 9; i++) {
		scanf("%hu", &arr[i]);
	}
	max = arr[0];
	for (i = 1; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	printf("%u\n%d\n", max, index + 1);
}