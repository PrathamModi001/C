#include<stdio.h>
void funct(int a){
    printf("The address of the varible called from the funtion is: %u",&a);
}

int main()
{
    int i = 6;
    printf("The address of the variable i is: %u\n\n",&i);
    funct(i);
    return 0;
}