#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,a,fact=1;
    float power,series,sum=1;
    printf("Enter the value of x: "); scanf("%d",&x);
    printf("Input the number of terms: "); scanf("%d",&n);

    for(a=1;a<=n-1;a++){
        fact*=a;
        power=pow(x,a);
        series=(float)(power/fact);
        sum+=series;
    }
    printf("The sum is: %f",sum);


    return 0;
}