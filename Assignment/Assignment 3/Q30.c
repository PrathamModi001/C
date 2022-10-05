#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char x;
    printf("Enter the character to be checked: "); scanf("%c",&x);

    if(isdigit(x)){
        printf("The entered character is a digit!");
    }
    else{
        printf("The entered character is not a digit!");
    }
    
    return 0;
}