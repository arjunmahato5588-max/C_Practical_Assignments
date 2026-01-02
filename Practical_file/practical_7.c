#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two account balances: ");
    scanf("%f %f", &a, &b);

    printf("Equal: %d\n", a == b);
    printf("First is greater: %d\n", a > b);
    printf("Second is greater: %d\n", b > a);

    return 0;
}
