#include <stdio.h>

int main() {
    int i, j;
    int rows = 6, cols = 7; 

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            
            if(j == 0 || j == cols-1){
                printf("*");
            }
            
            else if(i >= rows/2 && (i == j || i + j == cols-1)){
                printf("*");
        }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}