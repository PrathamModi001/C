#include<stdio.h>
void encrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;
    }
}

int main()
{
    char c[] = "Raat Ko garden Mein Milna";// You can play around by using the encrypted string and pasting it in the array
    encrypt(c);                   //Change the pointer to ptr-1 to get the encrypted message to print the correct message
    printf("Encrypted String is: %s",c);
    return 0;
}