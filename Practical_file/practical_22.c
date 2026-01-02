#include <stdio.h>

int main() {
    int i, attendance, present = 0;

    for (i = 1; i <= 30; i++) {
        printf("Enter attendance for day %d (1 = Present, 0 = Absent): ", i);
        scanf("%d", &attendance);

        if (attendance == 1)
            present++;
    }

    printf("Total present days = %d\n", present);

    return 0;
}
