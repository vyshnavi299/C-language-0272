#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("%c is an uppercase alphabet.", ch);
    else if(ch >= 'a' && ch <= 'z')
        printf("%c is a lowercase alphabet.", ch);
    else
        printf("%c is not an alphabet.", ch);

    return 0;
}
