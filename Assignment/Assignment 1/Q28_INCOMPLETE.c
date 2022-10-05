#include<stdio.h>

int main()
{
    int x,y,n,a,sum;


    printf("Enter the starting range: "); scanf("%d",&x);
    printf("Enter the ending range: "); scanf("%d",&y);

    printf("The perfect numbers within the given range: ");

    for(n=x;n<=y;n++){
        for(a=1;a<n;a++){
            if(n%a==0){
                sum+=a;
            }
            if(sum==n){
                printf("%d ",n);
            }
        }
    }
    return 0;
}