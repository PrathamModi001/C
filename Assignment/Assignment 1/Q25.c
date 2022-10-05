#include<stdio.h>
#include<math.h>

int main()
{
    int n,a,power,sum=0;

    printf("Enter the number of terms: "); scanf("%d",&n);

    for(a=1;a<=n;a++){
        power=pow(a,2);
        printf("%d ",power);
        sum+=power;
    }
    printf("\nThe sum is: %d",sum);
    return 0;
}