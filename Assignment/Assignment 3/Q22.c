#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main()
{
    char arr[100];
    printf("Enter the string: "); gets(arr);
    int l=strlen(arr);

    for(int a=0;arr[a]!='\0';a++){
        if((arr[a]>='a' && arr[a]<='z') || (arr[a]>='A' && arr[a]<='Z')){
            arr[a] = arr[a] + 32;
            }
        }

    printf("The string in lower case is: \n%s",arr);
    return 0;
}