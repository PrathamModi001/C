#include<stdio.h>

int main()
{
    int n,a,b,count=0;
    printf("Input the an integer number: ");
    scanf("%d",&n);

    printf("\nNext 10 consecutive even numbers:\n");
    for(a=n+1;count<=19;a++){
        if(a%2==0){
            printf("%d ",a);
        }
        count++;
    }

    printf("\nNext 10 consecutive odd numbers:\n");
    for(b=n+1;count<=20;b++){
        if(b%2!=0){
            printf("%d ",b);
        }
        count++;
    }
    return 0;
}