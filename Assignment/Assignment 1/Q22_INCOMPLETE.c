#include<stdio.h>

int main()
{
    int a,n,times,k=1;

    printf("Enter the value of rows: ");
    scanf("%d",&n);

    for(a=1;a<=n;a++){
        for(times=1;times<=a;times++){
            printf("%d",k%2);
            k++;
        }
        
        printf("\n");
    }
    return 0;
}