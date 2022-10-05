#include<stdio.h>


int main()
{
    char arr[] = "I Love Boobs";
    char *ptr=arr;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}