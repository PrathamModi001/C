#include <stdio.h>

int main()
{
    int n, a, answer;
    printf("The value of n is\n");
    scanf("%d", &n);
    a = 1;
    while (n >= a)
    {
        answer = n * a;
        printf("%d  *  %d  =  %d \n", n, a, answer);
        a++;
    }
    return 0;
}