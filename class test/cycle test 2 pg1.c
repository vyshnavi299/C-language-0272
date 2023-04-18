#include <stdio.h>

int main() {
    int nums[50] = {0};
    int i, j;

    for (i = 2; i < 50; i++) {
        if (nums[i] == 0) {
            
            for (j = i*2; j < 50; j += i) {
                nums[j] = 1;
            }
        }
    }

    printf("Composite numbers between 1 and 50:\n");
    for (i = 4; i < 50; i++) {
        if (nums[i] == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}



