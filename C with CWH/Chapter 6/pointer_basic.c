#include<stdio.h>


int main()
{
    long int a=3; int *j=&a;
    printf("The address of the variable is : %u",&a);
    //printf("The address of the variable is : %u",&a);
    printf("\n\nThe value of this variable is : %d",*j);
    //printf("\n\nThe value of this variable is : %d",*(&a));
    return 0;
}