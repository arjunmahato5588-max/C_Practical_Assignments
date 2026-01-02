#include <stdio.h>


void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);

    
    swap(&a, &b);

    printf("After Swap: a = %d, b = %d\n", a, b);

    return 0;
}