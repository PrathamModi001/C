#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the number: "); scanf("%d",&n);
    
    printf("The multiplication table of %d is: \n\n",n);
    int *ptr; ptr = malloc(10*sizeof(int));
    for(int a=0;a<10;a++){
        ptr[a] = n*(a+1);
        printf("%d X %d = %d\n",n,a+1,ptr[a]);
    }

    printf("\n\nUsing realloc to extend the table: \n\n");
    ptr = realloc(ptr, 15*sizeof(int));
    for(int a=0;a<15;a++){
        ptr[a] = n*(a+1);
        printf("%d X %d = %d\n",n,a+1,ptr[a]);
    }
    return 0;
}