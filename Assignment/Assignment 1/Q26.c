#include<stdio.h>

int main()
{
    int n,a,num=1;
    long int sum=0;
    printf("Enter the value if n: ");
    scanf("%d",&n);

    for(a=1;a<=n;a++){
        sum+=num;
        printf("%d ",num);
        num=num*10+1;
    }
    printf("\n\nThe sum of the series is: %d",sum);
    return 0;
}