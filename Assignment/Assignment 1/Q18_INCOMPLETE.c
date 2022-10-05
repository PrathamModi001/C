#include<stdio.h>
#include<math.h>

int main()
{
    int x,n,fact=1,a,m;
    float series=0,sum=0;

    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Input the number of terms: ");
    scanf("%d",&n);

    for(a=2;a<=(2*n-1);a+=2){
        m=1;
        for(int j =1;j<=2;j++){
            fact=fact*j;
        }
        series = series + (float)(pow(-1,m)*(pow(x,a))/fact);
        fact=1;
        m++;
    }
    sum=1+series;
    printf("The sum is %f",sum);
    return 0;
}