#include <stdio.h>
void main()
{
    int i,j,spc,base,k,t=1;
    printf("Input number of asterisks on the base : ");
    scanf("%d",&base);
    spc=base+4-1;
    for(i=1;i<=base;i+=2)
    {
        for(k=spc;k>=1;k--)
            {
                printf(" ");
            }
	    for(j=1;j<=i;j++)
	    printf("*");
	printf("\n");
    spc--;
    }
}