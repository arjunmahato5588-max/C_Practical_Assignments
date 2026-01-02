#include <stdio.h>

void factorial(int n, int *fact) {
    int i;
    *fact = 1;
    for (i = 1; i <= n; i++)
        *fact = (*fact) * i;
}

int main() {
    int num, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num, &fact);

    printf("Factorial = %d\n", fact);

    return 0;
}
