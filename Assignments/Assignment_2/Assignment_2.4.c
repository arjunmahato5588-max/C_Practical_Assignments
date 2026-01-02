#include <stdio.h>

int main() {
    float balance;
    float interest, maintenanceCharge, bonusFactor;

  
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    
    printf("Enter interest amount to be added: ");
    scanf("%f", &interest);
    balance += interest;
    printf("Balance after adding interest: %.2f\n", balance);

  
    printf("Enter annual maintenance charge: ");
    scanf("%f", &maintenanceCharge);
    balance -= maintenanceCharge;
    printf("Balance after deducting maintenance charge: %.2f\n", balance);

    
    printf("Enter bonus factor: ");
    scanf("%f", &bonusFactor);
    balance *= bonusFactor;
    printf("Balance after applying bonus factor: %.2f\n", balance);


    balance /= 2;
    printf("Balance after dividing between two accounts: %.2f\n", balance);

    return 0;
}
