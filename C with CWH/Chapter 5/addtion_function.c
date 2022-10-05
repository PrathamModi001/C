#include<stdio.h>

int sum(int a,int b);

int main()
{
    int c;
    c = sum(69,100);
    printf("The sum of the two digits is %d",c);
    return 0;
}
int sum(int a,int b){
    int result;
    result = a+b;
    return result;
}