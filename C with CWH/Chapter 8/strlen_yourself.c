#include<stdio.h>
#include<string.h>
char strlength(char *arr){
    char *ptr = arr;
    int count=0;
    while(*ptr!='\0'){
        count++; ptr++;
    }
    return count;
}

int main()
{
    char arr[15];
    printf("Enter your name: "); gets(arr); printf("\n"); puts(arr);
    printf("The number of characters in the string are: %d",strlength(arr));
    return 0;
}