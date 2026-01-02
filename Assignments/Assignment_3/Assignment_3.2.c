#include <stdio.h>

int main() {
    int i, j;
    int n = 7; 

    for(i = 0; i < n; i++) {
        
        printf("*");

      
        for(j = 0; j < n/2; j++) {
            if((i == 0 || i == n/2 || i == n-1) || j == n/2 - 1){
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