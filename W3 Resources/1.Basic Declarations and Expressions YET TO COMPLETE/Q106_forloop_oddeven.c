#include<stdio.h>

int main()
{
    int x,total,evencount=0,oddcount=0,negcount=0;
    
    printf("Enter the value of x:\n");
    
    for(total=1;total<7;total++){
        scanf("%d\n",&x);

        if(x%2==0){
            evencount++;
        }
        if(x%2!=0){
            oddcount++;
        }
        if(x<0){
            negcount++;
        }
    }
    printf("Even: %d\nOdd: %d\nNegative: %d",evencount,oddcount,negcount);
    return 0;
}