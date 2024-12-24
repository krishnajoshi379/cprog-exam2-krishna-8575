#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        return 0; 
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    
    unsigned long long fact = factorial(number);
    
    if (fact != 0) {
        printf("Factorial of %d is %llu\n", number, fact);
    } else {
        printf("Factorial is not defined for negative numbers.\n");
    }
    
    return 0;
}