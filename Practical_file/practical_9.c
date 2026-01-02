#include <stdio.h>

int main() {
    float balance;

    printf("Enter initial balance: ");
    scanf("%f", &balance);

    balance += 500;   
    printf("After interest: %.2f\n", balance);

    balance -= 200;   
    printf("After charges: %.2f\n", balance);

    balance += 300;   
    printf("After bonus: %.2f\n", balance);

    balance /= 2;    
    printf("After division: %.2f\n", balance);

    return 0;
}
