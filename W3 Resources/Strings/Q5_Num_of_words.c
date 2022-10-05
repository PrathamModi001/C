#include<stdio.h>
#include<string.h>


int main()
{
    char arr[100]; int count=0;
    printf("Enter the string: "); gets(arr); puts(arr);

    for(int a=0;arr[a]!='0';a++){
        if(arr[a]==' ' || arr[a]=='\n' || arr[a]=='\t'){
            count++;
        }
    }
    printf("The total number of words in the string are: %d",count+1);
    return 0;
}