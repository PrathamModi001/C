#include<stdio.h>
int perfect(int a);
int armstrong(int b);

int main()
{
    int x;
    printf("Enter the number to be tested: "); scanf("%d",&x);
    armstrong(x);
    perfect(x);
    return 0;
}
//ARMSTRONG NUMBER CHECK
int armstrong(int b){
    int l,m,n,sum=0;
    l = b/100;
    m = (b - (l*100))/10;
    n = (b - ((l*100)+(m*10)));

    sum = l*l*l + m*m*m + n*n*n;

    if(sum==b){
        printf("\n\nThe number %d is an Armstrong number!",b);
    }
    else{
        printf("\n\nThe number %d is not an Armstrong number!",b);
    }
}
//PERFECT NUMBER CHECK
int perfect(int a){
    int sum=0;
    for(int n=1;n<a;n++){
        if(a%n==0){
            sum+=n;
        }
    }
    if(sum==a){
        printf("\nThe number %d is a Perfect number!");
    }
    else{
        printf("\nThe number %d is not a Perfect number!");
    }
}