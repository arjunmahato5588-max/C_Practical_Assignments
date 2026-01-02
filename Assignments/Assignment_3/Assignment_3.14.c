#include <stdio.h>

int main() {
    int i, j;
    int n = 7; 

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
           
            if(j == 0 || j == n-1){
                printf("*");
            }
            else if(i == j){
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