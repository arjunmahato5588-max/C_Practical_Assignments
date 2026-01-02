#include <stdio.h>

int main() {
    int i;
    float usage, total = 0;

    for (i = 1; i <= 7; i++) {
        printf("Enter electricity usage for day %d (units): ", i);
        scanf("%f", &usage);
        total += usage;
    }

    printf("Total weekly consumption = %.2f units\n", total);

    return 0;
}
