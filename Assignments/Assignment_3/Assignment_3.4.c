#include <stdio.h>

int main() {
    int i, j;
    int rows = 5, cols = 5;

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            
            if(j == 0 || (i == 0 && j != cols-1) || (i == rows-1 && j != cols-1) || (j == cols-1 && i != 0 && i != rows-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}