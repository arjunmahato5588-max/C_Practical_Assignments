#include <stdio.h>

int main() {
    int rows = 7, cols = 7;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
 
            if (i == 0) {
                printf("*");
            }
            else if (j == cols / 2 && i < rows - 1) {
                printf("*");
            }
            else if (i == rows - 1 && j <= cols / 2) {
                printf("*");
            }
            else if (j == 0 && i >= rows - 3) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}