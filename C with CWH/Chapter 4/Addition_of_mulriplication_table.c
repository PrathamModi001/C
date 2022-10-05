#include <stdio.h>

int main()
{
    int n, a, answer, sum = 0;
    printf("The value of n is :\n");
    scanf("%d", &n);

    for (a = 1; a <= n; a++)
    {
        answer = n * a;
        printf("The value of the %d X %d is %d\n", n, a, answer);
        sum += answer;
    }
    printf("\n\nThe sum of all the answers is %d", sum);
    return 0;
}