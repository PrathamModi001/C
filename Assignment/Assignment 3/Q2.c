#include<stdio.h>

int stringlenth(char *arr){
    char *ptr = arr;
    int count=0;
    while(*ptr!='\0'){
        count++; ptr++;
    }
    return count;
}

int main()
{
    char arr[100];
    printf("Enter the string: "); gets(arr); puts(arr);
    printf("The length of the string is: %d",stringlenth(arr));
    return 0;
}