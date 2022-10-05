#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char x;
    printf("Enter the character to be checked: "); scanf("%c",&x);

    if(isupper(x)){
        printf("\nThe entered character is uppercase!");
    }

    else{
        printf("\nThe entered character is not uppercase!");
    }
    
    return 0;
}