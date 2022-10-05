#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("The value of n is \n");
    scanf("%d", &n);

    do
    {
        printf("The value of i is %d \n", i);
        i++;
    } while (n > i);
    return 0;
}