#include<stdio.h>
#include<string.h>


int main()
{
    char arr[1000]; int k=0;
    printf("Enter the string: "); gets(arr);
    
    for(int a=0;a<strlen(arr);a++){
        if(arr[a]==' '&&arr[a+1]!=' '&&arr[a+1]!='\0'){
            if(k>0){
                printf("\n");
            }
        }
        else if(arr[a]==' '&&arr[a+1]==' '){
            continue;
        }
        else{
            printf("%c",arr[a]);
            k++;
            }
        
    }
    return 0;
}