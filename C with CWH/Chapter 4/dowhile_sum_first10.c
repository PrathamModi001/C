#include <stdio.h>

int main()
{
    int a = 1, n, sum = 0;
    printf("The value of n is :\n");
    scanf("%d", &n);

    do
    {
        sum += a;
        a++;
    } while (a <= n);
    printf("The value of the first %d natural numbers is %d", n, sum);
    return 0;
}