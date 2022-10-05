#include <stdio.h>

int main()
{
    int a, n,sum;
    printf("The value of n is : \n");
    scanf("%d", &n);
    for (a = 0; a <= n; a++)
    {
        printf("%d ", a);
        sum+=a;
    }
    printf("\n\nThe sum of the first %d natural numbers is %d",n,sum);
    return 0;
}