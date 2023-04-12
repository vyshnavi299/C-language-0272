#include <stdio.h>

int main() {
    int decimal, binary[32], i;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
