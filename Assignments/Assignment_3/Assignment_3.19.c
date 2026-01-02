#include <stdio.h>
int main() {
    int i, j;
    int rows = 7, cols = 5; 

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(i == 0){
                printf("*");
            }
            else if(i == rows / 2){
                printf("*");
            }
            else if(i == rows - 1){
                printf("*");
            }
            else if(j == 0 && i < rows / 2){
                printf("*");
            }
            else if(j == cols - 1 && i > rows / 2){
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