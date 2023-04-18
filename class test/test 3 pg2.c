#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    

    char *ptr1 = str1;
    char *ptr2 = str2;
    
    int result = strcmp(ptr1, ptr2);
    
    if (result == 0)
        printf("The strings are equal\n");
    else if (result > 0)
        printf("'%s' is greater than '%s'\n", str1, str2);
    else
        printf("'%s' is less than '%s'\n", str1, str2);
        
    return 0;
}

