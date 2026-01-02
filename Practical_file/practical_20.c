#include <stdio.h>

int main() {
    int i, age, count = 0;

    for (i = 1; i <= 10; i++) {
        printf("Enter age of employee %d: ", i);
        scanf("%d", &age);

        if (age >= 30)
            count++;
    }

    printf("Number of employees aged 30 or above = %d\n", count);

    return 0;
}
