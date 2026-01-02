#include <stdio.h>

int main() {
    float price, total = 0;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Enter price of item %d: ", i);
        scanf("%f", &price);
        total += price;
    }

    printf("Total Bill = %.2f\n", total);

    return 0;
}
