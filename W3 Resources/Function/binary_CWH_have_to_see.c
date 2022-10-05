#include<stdio.h>
long bin(int a);

int main()
{
    int n;
    printf("Enter the decimal number: "); scanf("%d",&n);
    printf("\nThe binary code for the same is: \n%d",bin(n));
    return 0;
}
long bin(int a){
    int answer;
    while(answer!=0){
        int remain = a%2;
        printf("%d ",remain);
        int answer = a/2;
        a = answer;
        return remain;
    }
}