#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;

    printf("Enter your first number: \n");
    scanf("%d", &n1);

    printf("Enter your second number: \n");
    scanf("%d", &n2);

    printf("Enter your third number: \n");
    scanf("%d", &n3);

    printf("Enter your fourth number: \n");
    scanf("%d", &n4);

    if ((n1 > n2) && (n1 > n2) && (n1 > n3) && (n1 > n4))
    {
        printf("The largest number is %d", n1);
    }

    else if ((n2 > n3) && (n2 > n4))
    {
        printf("The largest number is %d", n2);
    }

    else if (n3 > n4)
    {
        printf("The largest number is %d", n3);
    }

    else
    {
        printf("The largest number is %d", n4);
    }

    return 0;
}