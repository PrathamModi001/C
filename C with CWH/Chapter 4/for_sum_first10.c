#include <stdio.h>

int main()
{
    int a, sum = 0;
    for (a = 1; a <= 10; a++)
    {
        sum = sum + a;
    }
    printf("The sum of the first 10 natural numbers is: %d\n", sum);
    return 0;
}