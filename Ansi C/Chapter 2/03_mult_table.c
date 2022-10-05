#include<stdio.h>

int main()
{
    int n,a,answer;
    printf("The value of n is:\n ");
    scanf("%d",&n);

    for(a=0;a<=n;a++){
        answer= n*a;
        printf("%d X %d = %d\n",n,a,answer);
    }
    return 0;
}