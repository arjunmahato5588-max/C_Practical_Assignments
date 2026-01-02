#include <stdio.h>

int main() {
    int i, j;

    // Pattern for A R J U N
    for(i = 1; i <= 7; i++) {

        // A
        for(j = 1; j <= 7; j++) {
            if((j == 1 || j == 7) && i != 1 || (i == 1 || i == 4) && j > 1 && j < 7)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // R
        for(j = 1; j <= 7; j++) {
            if(j == 1 || (i == 1 || i == 4) && j < 7 || j == 7 && i > 1 && i < 4 || (j == i-3 && i > 4))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // J
        for(j = 1; j <= 7; j++) {
            if(i == 1 || j == 4 && i < 7 || (i == 7 && j > 1 && j < 6) || (i > 4 && j == 1 && i < 7))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // U
        for(j = 1; j <= 7; j++) {
            if((j == 1 || j == 7) && i != 7 || (i == 7 && j > 1 && j < 7))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // N
        for(j = 1; j <= 7; j++) {
            if(j == 1 || j == 7 || j == i)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}