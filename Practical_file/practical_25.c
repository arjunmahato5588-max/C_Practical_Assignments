#include <stdio.h>

int main() {
    int day;

    printf("Enter day (1-Mon to 6-Sat): ");
    scanf("%d", &day);

    switch (day) {
        case 1: printf("Monday: Mathematics\n"); break;
        case 2: printf("Tuesday: Physics\n"); break;
        case 3: printf("Wednesday: Chemistry\n"); break;
        case 4: printf("Thursday: Programming\n"); break;
        case 5: printf("Friday: English\n"); break;
        case 6: printf("Saturday: Lab\n"); break;
        default: printf("Invalid day\n");
    }

    return 0;
}
