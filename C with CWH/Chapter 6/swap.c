#include<stdio.h>
void swap(int *i,int *j);

int main()
{
    int a=9,b=6;
    printf("The value of a and b before the swap is: %d %d ",a,b);
    swap(&a,&b);
    printf("\n\nThe value of a and b after the swap is: %d %d",a,b);
    return 1;
}

void swap(int *i,int *j){
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}