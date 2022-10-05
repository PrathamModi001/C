#include<stdio.h>


int main()
{
    char arr[15];
    printf("Enter your name: "); scanf("%s",arr);
    printf("%s",arr);// NOTE: This will not take your second name;
                    // That is it wint take anything after the space only 1 word input;
    return 0;
}