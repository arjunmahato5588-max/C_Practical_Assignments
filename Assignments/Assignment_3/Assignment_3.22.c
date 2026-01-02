#include <stdio.h>

int main() {
    int i, j;
    int rows = 7; 
    for(i = 0; i < rows; i++) {
        for(j = 0; j < 2 * rows - 1; j++) {
       
            if(j == i){
                printf("*");
            }
            else if(j == 2 * rows - 2 - i){
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