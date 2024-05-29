#include <stdio.h>

void myswap(int* pa, int* pb) {
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	myswap(&a, &b);
	printf("%d %d", a, b);
}