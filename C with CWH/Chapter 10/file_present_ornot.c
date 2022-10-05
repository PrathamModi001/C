#include<stdio.h>


int main()
{
    int num1,num2;
    FILE *ptr; ptr = fopen("Number.txt","r"); 

    if(ptr == NULL){
        printf("The file does not exist.\n\n");
    }
    
    else{
        printf("The file exists.\n\n");
        fscanf(ptr,"%d",&num1); fscanf(ptr,"%d",&num2);
        fclose(ptr);

        printf("The first number present in the file is: %d\n",num1);
        printf("The second number present in the file is: %d\n",num2);
    }
    //if there are more than one number present in the file only the first will be read;
    //if you want to read more than one ints then do multiple of fscanf.
    // THE POINT IS: one fscanf will not take all ints but only one.
    return 0;
}