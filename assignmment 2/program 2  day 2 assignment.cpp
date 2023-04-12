#include <stdio.h>

int main() {
    int arr[50], i, n;
    int largest1, largest2;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest1 = arr[0];
    largest2 = arr[1];
    if (largest1 < largest2) {
        int temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > largest1) {
            largest2 = largest1;
            largest1 = arr[i];
        } else if (arr[i] > largest2 && arr[i] != largest1) {
            largest2 = arr[i];
        }
    }

    printf("The largest two elements in the array are %d and %d", largest1, largest2);

    return 0;
}

