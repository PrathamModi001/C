#include<stdio.h>
#include<string.h>


int main()
{
    char arr[100],check[100];
    int len1=0,len2=0,k;
    printf("Enter the string: "); gets(arr);
    printf("Enter the substring to be searched: "); gets(check);

    len1=strlen(arr); len2=strlen(check);

    for(int a=0;a<len1;a++){
        for(int b=0;b<len2;b++){
            if(arr[a+b]!=arr[b]){
                break;
            }
            if(b==len2){
            printf("Sub string found at index number: %d\n",a+1);
        }
        }
    }
    
    
    return 0;
}