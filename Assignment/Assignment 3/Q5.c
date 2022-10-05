#include<stdio.h>
#include<string.h>

int main()
{
    int count=0;
    char arr[15];
    printf("Input the string: "); gets(arr); puts(arr);
    int len = strlen(arr);

    for(int a=0;a<len;a++){
        if(arr[a]==' '|| arr[a]=='\n'|| arr[a]=='\t'){
            count++;
        }
    }
    printf("\nThe number of words in the array are: %d",count+1);
    return 0;
}