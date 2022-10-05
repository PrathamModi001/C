#include <stdio.h>

int main() {
    int row_max = 20, row_i = 0;
    for (int i = 1; i <= 200; i++) {
        int isPrime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            if (row_i < row_max) {
                printf("%d ", i);
                row_i++;
            } else {
                printf("\n%d ", i);
                row_i = 1; 
            }
        }
    }    
    printf("\n");

    return 0;
}