#include<stdio.h>

int main()
{
    int x,y,sum=0,a;

    printf("Enter the range of numbers:[x<y] \n");
    scanf("%d",&x);
    scanf("%d",&y);

    if (x>y){
        printf("Invalid Response!");
    }

    else{
        printf("The odd numbers are: \n");

        for(a=x;a<=y;a++){
            if (a%2!=0){
                printf("%d\n",a);
                sum+=a;
        }
    }
    printf("The sum of these odd numbers is: %d",sum);
            }
            
    return 0;
}