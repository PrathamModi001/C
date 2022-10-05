#include<stdio.h>


int main()
{
    FILE *ptr; ptr = fopen("MultTable.txt","w");

    int n;
    printf("Input the integer: "); scanf("%d",&n);

    fprintf(ptr,"Multiplication Table of %d:\n=============================================================\n\n",n);
    for(int a=1;a<=10;a++){
        fprintf(ptr,"%d X %d = %d\n",n,a,n*a);
    }
    fclose(ptr);
    printf("\n\nSuccesfully Printed The Table Of %d",n);
    return 0;
}