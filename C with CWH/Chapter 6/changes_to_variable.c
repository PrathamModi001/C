#include<stdio.h>
void funct(int *a);

int main()
{
    int i; int *j=&i;
    printf("Enter the value of the integer: "); scanf("%d",&i);
    printf("\n\n\nThe value of the variable i before the change is %d",i);
    funct(j);
    printf("\nThe value of the integer after the change is %d",i);
    return 0;
}

void funct(int *a){
    (*a)*=10;
}