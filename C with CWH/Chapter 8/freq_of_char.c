#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100]; int freq=0; char key;

    printf("Enter the string to be checked: "); gets(arr); puts(arr);
    char *ptr=arr;

    printf("\n\nInput the character to check its frequency: "); scanf("%c",&key);

    while(*ptr!='\0'){
        if(*ptr==key){
            freq++;
        }
        ptr++;
    }
    printf("\nThe frequency of the letter %c is: %d",key,freq);
    return 0;
}