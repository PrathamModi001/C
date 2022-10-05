#include<stdio.h>
#include<string.h>


int main()
{
    char arr[100]; int vow=0; int cons=0;
    printf("Enter the string to be checked: "); gets(arr);

    for(int a=0;arr[a]!='\0';a++){
        if(arr[a]=='a' || arr[a]=='e' || arr[a]=='i' || arr[a]=='o' || arr[a]=='u' || arr[a]=='A' || arr[a]=='E' || arr[a]=='I' || arr[a]=='O' || arr[a]=='U'){
            vow++;
        }
        else{
            cons++;
        }
    }
    printf("Vowel: %d",vow);
    printf("\nConsonent: %d",cons);
    return 0;
}