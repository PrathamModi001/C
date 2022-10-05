#include <stdio.h>

int main()
{
    int n, a = 0;
    printf("The value of n is \n");
    scanf("%d", &n);

    for (a = n; a >= 0; a--)
    {
        printf("The value of a is %d\n", a);
    }

    return 0;
}