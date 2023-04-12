//array of positive and negative 


#include <stdio.h>

int main() {
   int arr[] = {2, -4, 6, -8, 10, -12};
   int size = sizeof(arr)/sizeof(arr[0]);

   printf("Positive numbers: ");
   for(int i = 0; i < size; i++) {
      if(arr[i] > 0) {
         printf("%d ", arr[i]);
      }
   }

   printf("\nNegative numbers: ");
   for(int i = 0; i < size; i++) {
      if(arr[i] < 0) {
         printf("%d ", arr[i]);
      }
   }

   return 0;
}




// array to get the given number  

#include <stdio.h>

int main() {
    int arr[] = { 2, 4, 6, 8, 10 };
    int num = 6;
    int found = 0;  // flag to track whether the number is found or not

    for (int i = 0; i < 5; i++) {
        if (arr[i] == num) {
            found = 1;
            break;  // exit the loop as soon as the number is found
        }
    }

    if (found) {
        printf("The number %d is present in the array.\n", num);
    } else {
        printf("The number %d is not present in the array.\n", num);
    }

    return 0;
} 
