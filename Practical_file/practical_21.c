#include <stdio.h>

int main() {
    int i;
    float distance, total = 0;

    for (i = 1; i <= 30; i++) {
        printf("Enter walking distance for day %d (km): ", i);
        scanf("%f", &distance);
        total += distance;
    }

    printf("Total distance walked in the month = %.2f km\n", total);

    return 0;
}
