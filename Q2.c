// Frequency Counter 

#include <stdio.h>

int main() {
    char str[100];
    int frequency[256] = {0}; 
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        frequency[(int)str[i]]++; 
        i++;
    }

    printf("\nCharacter Frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c' appears %d times\n", i, frequency[i]);
        }
    }

    return 0;
}
