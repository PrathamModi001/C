#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char x;
    printf("Input the string: "); scanf("%c",&x);
    if(islower(x)){
        printf("The character input is lowercase!");
    }
    else{
        printf("The character input is not lowercase! It is uppercase.");
    }
    
    return 0;
}