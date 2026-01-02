#include <stdio.h>

int main() {
    char name[50];
    float basic, hra, da, gross, tax, net;

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;
    da = 0.10 * basic;
    gross = basic + hra + da;
    tax = 0.05 * gross;
    net = gross - tax;

    printf("\nEmployee Name: %s\n", name);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross);
    printf("Income Tax: %.2f\n", tax);
    printf("Net Salary: %.2f\n", net);

    return 0;
}
