#include <stdio.h>

int main()
{
    int i = 0, n, factorial = 1;
    printf("The value of n is :\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The value of the factorial of %d is %d", n, factorial);
    return 0;
}