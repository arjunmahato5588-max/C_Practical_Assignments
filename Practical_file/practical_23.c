#include <stdio.h>

int main() {
    int i, j;

    
    printf("Rectangle:\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 7; j++)
            printf("* ");
        printf("\n");
    }

    
    printf("\nSquare:\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++)
            printf("* ");
        printf("\n");
    }

    
    printf("\nRight-angle Triangle:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    
    printf("\nReverse Right-angle Triangle:\n");
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

   
    printf("\nCentral Triangle:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
