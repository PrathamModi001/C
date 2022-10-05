#include<stdio.h>

int main()
{
    int a,b,n,sum;
    printf("Enter the range of numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);

    if (a>b){
        printf("Invalid response!");
    }

    else{
        printf("The numbers are: \n");
        for (n=a;n<b;n++){
            if ((n%7==2 || n%7==3)){
                printf("%d\n",n);
                sum+=n;
            }
        }
        printf("And their sum is: %d",sum);
    }
    return 0;
}