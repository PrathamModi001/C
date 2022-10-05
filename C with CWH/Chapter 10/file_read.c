#include<stdio.h>


int main()
{
    int n;
    FILE *ptr;
    ptr = fopen("Number.txt","r");

    fscanf(ptr,"%d",&n);
    fclose(ptr);
    
    printf("The value of num is: %d\n",n);
    return 0;
}