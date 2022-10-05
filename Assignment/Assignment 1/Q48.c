#include<stdio.h>
int factorial(int m);
int strong_range(int start,int end);

int main()
{
    int start,end;
    strong_range(start,end);
    return 0;
}

int factorial(int m){
    int fact=1;
    for(int a=1;a<=m;a++){
        fact *=a;
    }
    return fact;
}

int strong_range(int start,int end){
    int sum=0;

    printf("\nEnter the starting range: "); scanf("%d",&start);
    printf("\nEnter the ending range: "); scanf("%d",&end);

    printf("\n\nThe Strong Numbers between the range %d and %d are: \n1 2 ",start,end);

    for (int a=start;a<=end;a++){
        int x = a/100;
        int y = (a - (x*100))/10;
        int z = (a - ((x*100)+(y*10)));
        
        sum = factorial(x) + factorial(y) + factorial(z);

        if(sum == a){
            printf("%d ",a);
        }
    }
}