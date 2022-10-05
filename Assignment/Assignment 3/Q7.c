#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100]; int alph=0,digit=0,spec=0;
    printf("Input the string: "); gets(arr); puts(arr);
    int len = strlen(arr);

    for(int a=0;a<len;a++){
        if(arr[a]>='A' && arr[a]<='Z' || arr[a]>='a' && arr[a]<='z'){
            alph++;
        }
        else if(arr[a]>='0' && arr[a]<='9'){
            digit++;
        }
        else{
            spec++;
        }
    }
    
    printf("\nThe number of alphabets: %d",alph);
    printf("\nThe number of digits: %d",digit);
    printf("\nThe number of special characters: %d",spec);
    return 0;
}