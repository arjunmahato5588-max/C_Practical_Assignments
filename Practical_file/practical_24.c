#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("Press 1 for Table, 0 to Exit: ");
        scanf("%d", &choice);

        if (choice == 0)
            break;

        if (choice == 1) {
            int num, i = 1;
            printf("Enter number: ");
            scanf("%d", &num);

            while (i <= 10) {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            }
        }
    }
    return 0;
}
