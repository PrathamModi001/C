#include<stdio.h>


int main()
{
    int mul[10];
    for(int a=0;a<10;a++){
        mul[a] = 5*(a+1);
        printf("5 X %d = %d\n",a+1,mul[a]);
    }
    return 0;
}