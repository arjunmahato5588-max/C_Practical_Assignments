#include <stdio.h>

int main() {
    int i, j;
    int n = 7; 

    for(i = 0; i < n; i++) {
       
        for(j = i; j < n - 1; j++) {
            printf(" ");
        }
        
        for(j = 0; j < 2*i + 1; j++) {
            if(i == 0 || i == n/2 || j == 0 || j == 2*i) {
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
