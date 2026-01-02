#include <stdio.h>

int main() {
    float balance1, balance2;

   
    printf("Enter first account balance: ");
    scanf("%f", &balance1);

    printf("Enter second account balance: ");
    scanf("%f", &balance2);

    
    printf("\nComparison Results (1 = True, 0 = False)\n");
    printf("Both balances are equal        : %d\n", balance1 == balance2);
    printf("First balance > Second balance: %d\n", balance1 > balance2);
    printf("Second balance > First balance: %d\n", balance2 > balance1);

    return 0;
}
