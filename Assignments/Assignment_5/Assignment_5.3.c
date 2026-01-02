#include <stdio.h>

int main() {
    char str[200];
    int i, words = 0;

  
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] == ' ' || str[i] == '\n') &&
            (i > 0 && str[i - 1] != ' ')) {
            words++;
        }
    }

    
    if (str[0] != '\n')
        words++;
\
    printf("Number of words: %d\n", words);

    return 0;
}
