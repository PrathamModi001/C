#include<stdio.h>
#include<string.h>

int main()
{
    char arr[20]; int vowel=0,cons=0;
    printf("Input the string: "); gets(arr); puts(arr);
    int len = strlen(arr);

    for(int a=0;a<len;a++){
        if(arr[a]=='a' || arr[a]=='A' || arr[a]=='e' || arr[a]=='E' || arr[a]=='i' || arr[a]=='I' || arr[a]=='o' || arr[a]=='O' || arr[a]=='u' || arr[a]=='U'){
            arr[a] = arr[a] - 32;
        }
        else{
            cons++;
        }
    }
    
    printf("THe modified String is: %s",arr);
    // printf("\n\nNumber of consonent in the string is: %d",cons);
    // printf("\nThe numebr of vowel in the string: %d",vowel);
    return 0;
}