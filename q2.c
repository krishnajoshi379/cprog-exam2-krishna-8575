
#include <stdio.h>

int main() {
    int start = 5; 
    int rows = 5;  

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", start * j);
        }
        printf("\n");
    }

    return 0;
}
