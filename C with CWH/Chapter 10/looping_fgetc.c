#include<stdio.h>


int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt","r");
    char c = fgetc(ptr);
    //fgetc is used to print character by character present in the file.
    // so if we use for loop we can print the string.
    while(c!=EOF) {
        printf("%c",c);
        c = fgetc(ptr);
    }
    
    return 0;
}