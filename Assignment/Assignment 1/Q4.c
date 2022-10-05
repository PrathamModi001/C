#include<stdio.h>

int main()
{
    int a,n=0,sum;
    float avg;

    printf("Input 10 numbers: \n");

    for(a=1;a<=10;a++){
        printf("Number - %d: ",a);
        scanf("%d",&n);
        sum+=n;
        avg=(float)sum/10;
    }   
    printf("The sum of the 10 numbers is: %d\n",sum);
    printf("The average of the 10 numbers is: %f",avg);

    return 0;
}