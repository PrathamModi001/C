#include<stdio.h>

int main()
{
    char chr;
    for (chr=65;chr<=122;chr++){
        if(chr>90 && chr<97){
            continue;
        }
        printf("[%d-%c",chr,chr);
    }

    return 0;
}