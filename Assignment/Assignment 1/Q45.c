#include<stdio.h>


int main()
{
    int a,b,n,lcm=1;
    printf("Enter the first number: "); scanf("%d",&a);
    printf("Enter the second number: "); scanf("%d",&b);

    for(n=2;;n++){
        if(n%a==0 && n%b==0){
            lcm=n;
            break;
        }
    }
    printf("The LCM of %d and %d is %d",a,b,lcm);
    return 0;
}