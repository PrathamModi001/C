#include<stdio.h>
#include<string.h>


int main()
{
    char arr[100],x; int count =0;
    printf("Enter the string: "); gets(arr);
    printf("Input the character to be checked: "); scanf("%c",&x);

    for(int a=0;arr[a]!='\0';a++){
        if(arr[a]==x){
            count++;
        }
    }
    printf("The frequency of the character '%c' is %d",x,count);
    return 0;
}