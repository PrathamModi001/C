#include<stdio.h>

int main()
{
    int a,cube,n;
    printf("Input the number of terms: ");
    scanf("%d",&n);

    for(a=1;a<=n;a++){
        printf("Number is : %d and cube of the %d is : %d\n",a,a,a*a*a);
    }
    return 0;
}