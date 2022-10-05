#include <stdio.h>

int main()
{
    int n, a, answer;
    printf("The value of n is :");
    scanf("%d", &n);

    printf("***The Multiplation Table Of n*** \n\n");

    for (a = 10; a >= 0; a--)
    {
        printf("%d * %d = %d\n", n, a, n * a);
    }
    return 0;
}