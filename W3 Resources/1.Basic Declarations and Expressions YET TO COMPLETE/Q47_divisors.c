#include<stdio.h>

int main()
{
    int n,a;

    printf("The value of the integer is: ");
    scanf("%d",&n);

    printf("All the divisors of %d are: \n",n);
    for (a=1;a<=n;a++){
        if (n%a==0){
            printf("%d\n",a);
        }
    }
    return 0;
}