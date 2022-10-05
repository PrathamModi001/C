#include<stdio.h>

int main()
{
    int n,x,y;

    printf("Enter the size of the square: ");
    scanf("%d",&n);

    for(y=1;y<=n;y++){
        printf("\n");
        for (x=1;x<=n;x++){
            printf("# ");
        }
    }
    return 0;
}