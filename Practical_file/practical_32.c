#include <stdio.h>

void calculate(int *a, int *b, int *sum, int *sub, int *mul, float *div) {
    *sum = *a + *b;
    *sub = *a - *b;
    *mul = (*a) * (*b);
    *div = (float)(*a) / (*b);
}

int main() {
    int x, y, sum, sub, mul;
    float div;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    calculate(&x, &y, &sum, &sub, &mul, &div);

    printf("Addition = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %.2f\n", div);

    return 0;
}
