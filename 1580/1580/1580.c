// �Լ��� �̿��� ���� ���̸� ���ϴ� ���α׷�
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