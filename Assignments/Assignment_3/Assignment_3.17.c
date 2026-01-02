#include <stdio.h>

int main() {
    int rows = 7, cols = 7;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if ((i == 0 || i == rows - 1) && j > 0 && j < cols - 1) {
                printf("*");
            }
            else if (j == 0 && i > 0 && i < rows - 1) {
                printf("*");
            }
            else if (j == cols - 1 && i > 0 && i < rows - 1) {
                printf("*");
            }

            else if (i == j && i >= rows/2) {
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