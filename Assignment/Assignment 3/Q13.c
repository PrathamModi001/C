#include<stdio.h>
#include<string.h>


int main()
{
    char arr[30]; int pos; int exlen;
    printf("Enter the string: "); gets(arr);
    int len = strlen(arr);
    
    printf("Input the position to start extraction: "); scanf("%d",&pos);
    printf("Enter the length of the extracted string: "); scanf("%d",&exlen);

    printf("The substring retrieved will give: \n");
    for(int a=pos-1;a<pos+exlen;a++){
        printf("%c",arr[a]);
    }
    return 0;
}