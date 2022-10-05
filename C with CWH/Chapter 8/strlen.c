#include<stdio.h>
#include<string.h>


int main()
{
    char arr[20];
    printf("Enter your full name: "); gets(arr); puts(arr);
    int length=strlen(arr);
    printf("\n\nThe length of this string is: %d",length);
    return 0;
}