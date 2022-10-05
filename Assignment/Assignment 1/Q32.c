#include<stdio.h>

int main()
{
    int n,a,prime=1;

    printf("Enter the number to be tested: "); scanf("%d",&n);

    for(a=2;a<n;a++){
        if(n%a==0){
            prime=0;
            //break;
        }
    }
    if(prime==1){
        printf("\nIt is a prime number!");
    }
    if(prime==0){
        printf("\nIt is not a prime number!");
    }
    return 0;
}