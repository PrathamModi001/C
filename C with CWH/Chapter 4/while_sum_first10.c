#include <stdio.h>

int main()
{
    int a = 1, sum = 0, n;
    printf("The value of n is :\n");
    scanf("%d", &n);

    while (a <= n)
    {
        sum += a;
        a++;
    }
    printf("The sum of the first %d values is %d\n", n, sum);

    return 0;
}