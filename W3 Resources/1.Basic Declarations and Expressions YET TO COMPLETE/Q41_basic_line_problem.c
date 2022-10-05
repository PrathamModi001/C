#include<stdio.h>

int main()
{
    int x,y,n,a=1;

    printf("Enter the number of lines: ");
    scanf("%d",&n);

    for (y=1;y<=n;y++){
        printf("\n");
        for (x=1;x<=3;x++){
            printf("%d ",a);
            a++;
        }
    }
    return 0;
}