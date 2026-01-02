#include <stdio.h>

int main() {
    int color;

    printf("Enter color (1-Red, 2-Yellow, 3-Green): ");
    scanf("%d", &color);

    switch (color) {
        case 1:
            printf("Stop\n");
            break;
        case 2:
            printf("Ready\n");
            break;
        case 3:
            printf("Go\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
