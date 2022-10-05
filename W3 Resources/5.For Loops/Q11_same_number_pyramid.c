//UNDERSTAND THE DIFFERENCE BETWEEN Q10 & Q11 //

#include<stdio.h>

int main()
{
    int n,a,x;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(a=1;a<=n;a++){
        for(x=1;x<=a;x++){
            printf("%d",a);//taking x and a is the onlyy difference but it dindt strike you! //
        }
        printf("\n");
    }
    return 0;
}