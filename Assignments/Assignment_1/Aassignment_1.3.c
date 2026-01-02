#include <stdio.h>

int main() {
    int x, result;

   
    x = 5;
    result = ++x + 10;   
    printf("Pre-increment (++x):\n");
    printf("x = %d, result = %d\n\n", x, result);

    
    x = 5;
    result = x++ + 10;   
    printf("Post-increment (x++):\n");
    printf("x = %d, result = %d\n", x, result);

    return 0;
}
