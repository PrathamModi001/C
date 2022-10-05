#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char arr[100],x;
    printf("Enter the string: "); gets(arr);
    int l = strlen(arr);
    printf("Enter the character to replace spaces with: "); scanf("%d",&x);

    for(int a=0;a<l;a++){
        int new_char=arr[a];
        if(isspace(new_char)){
            new_char = x;
            putchar(new_char);
        }
    }
    
    return 0;
}