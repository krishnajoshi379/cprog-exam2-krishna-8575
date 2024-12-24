#include <stdio.h>

int main() {
    int n; 

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  
    int sum = 0; 
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {  
            sum += arr[i];  
        }
    }

    printf("The sum of all positive values in the array is: %d\n", sum);

    return 0;
}
