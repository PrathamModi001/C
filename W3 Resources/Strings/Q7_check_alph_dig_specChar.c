#include<stdio.h>


int main()
{
    char arr[100];
    int dig=0; int alph=0; int spec=0;
    printf("Enter the string to be checked: "); gets(arr); puts(arr);

    for(int a=0;arr[a]!='\0';a++){
        if(arr[a]>='a' && arr[a]<='z' || arr[a]>='A' && arr[a]<='Z'){
            alph++;
        }
        else if(arr[a]>='0' && arr[a]<='9'){
            dig++;
        }
        else{
            spec++;
        }
    }

    printf("Digits: %d",dig);
    printf("\nAlphabets: %d",alph);
    printf("\nSpecial Characters: %d",spec);
    return 0;
}