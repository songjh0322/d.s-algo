// 함수를 이용한 원의 넓이를 구하는 프로그램
#include <stdio.h>
#define PI 3.14


float circle(int r) {
    float radious;
    radious = PI * r * r;
    return radious;
}

int main(void) {
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}