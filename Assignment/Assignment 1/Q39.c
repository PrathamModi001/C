#include<stdio.h>


int main()
{
    int n,a,sum=0;

    printf("The integers between 100 and 200 divisible by 9 are: \n");

    for(a=100;a<=200;a++){
        if(a%9==0){
            printf("%d ",a);
            sum+=a;
        }
    }
    printf("\nThe sum of these integers that are divisible by 9 is: \n%d",sum);
    return 0;
}