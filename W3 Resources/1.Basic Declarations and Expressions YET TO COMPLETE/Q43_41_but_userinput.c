#include<stdio.h>

int main()
{
    int x,totalx,y,totaly,n,a=1;

    printf("Enter the number of sleeping rows: ");
    scanf("%d",&totaly);
    printf("Enter the number of standing rows: ");
    scanf("%d",&totalx);

    for (y=1;y<=totaly;y++){
        printf("\n");
        for (x=1;x<=totalx;x++){
            printf("%d ",a);
            a++;
        }
    }

    return 0;
}