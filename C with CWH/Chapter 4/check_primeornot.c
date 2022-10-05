#include <stdio.h>

int main()
{
    // Prime Numbers = A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers.
    // Disclaimer: This is not the best method to solve this problem
    int n, i, prime = 1;

    printf("The number to be checked is :");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("\n\nThis is not a prime number, it is a composite number.");
    }
    else
    {
        printf("\n\nThis is a prime number");
    }
    return 0;
}