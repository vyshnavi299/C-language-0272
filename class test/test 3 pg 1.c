#include <stdio.h>
int sum(int n) {
    if(n == 0) {
        return 0;
    }
    else {
        return n + sum(n-1);
    }
}


int lcm(int a, int b) {
    static int common = 1;

    if (common % a == 0 && common % b == 0) {
        return common;
    }
    common++;
    lcm(a, b);
}

int main() {
    int n, i, arr[100], sum_of_n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter the value of number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    sum_of_n = sum(n);
    printf("Sum of first %d numbers is: %d\n", n, sum_of_n);

    int lcm_value = arr[0];
    for(i=1; i<n; i++) {
        lcm_value = lcm(lcm_value, arr[i]);
    }
    printf("LCM of given numbers is: %d", lcm_value);

    return 0;
}

