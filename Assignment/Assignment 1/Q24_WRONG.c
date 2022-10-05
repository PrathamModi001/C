#include<stdio.h>
#include<math.h>

int main()
{
    int x,n,a,power,times,m,series,sum=0;
    
    printf("Input the value of x: "); scanf("%d",&x);
    printf("Input the number of terms: "); scanf("%d",&n);

    for(a=1;a<=n;a+=2){
        for(times=1;times<=n;times++)
        if(times%2==0){
            m=1;
        }
        else{
            m=-1;
        }
        power=pow(x,a);
        series= (m*power);
        printf("%d",series);
        sum+=series;
    }
    printf("The sum is: %d",sum+x);
    return 0;
}