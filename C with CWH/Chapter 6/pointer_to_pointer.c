#include<stdio.h>


int main()
{
    int i=69;
    int*j=&i; int**l=&j;
    printf("The value of the variable is: %d",**l);
    return 0;
}