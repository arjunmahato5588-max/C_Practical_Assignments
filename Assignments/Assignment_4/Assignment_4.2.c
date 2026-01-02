#include <stdio.h>

int findMax(int *x, int *y) {
    if (*x > *y)
        return *x;
    else
        return *y;
}

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

   
    max = findMax(&a, &b);

    printf("Maximum = %d\n", max);

    return 0;
}