#include <stdio.h>
#include <string.h>

int main() {
    char first_str[100], second_str[100];
    int i, j, k;

    printf("Enter the first string: ");
    scanf("%s", first_str);

    printf("Enter the second string: ");
    scanf("%s", second_str);

    for (i = 0; i < strlen(second_str); i++) {
        for (j = 0; j < strlen(first_str); j++) {
            if (second_str[i] == first_str[j]) {
                for (k = i; k < strlen(second_str); k++) {
                    second_str[k] = second_str[k + 1];
                }
                i--; 
                break;
            }
        }
    }

    printf("The second string after removing the common characters is: %s", second_str);

    return 0;
}

