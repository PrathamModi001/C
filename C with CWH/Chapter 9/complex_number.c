#include<stdio.h>
#include<string.h>

typedef struct complex{
    int real; int complex;
}comp;

void display(comp array[]){
    printf("The Complex Numbers Are: \n");
    for(int a=0;a<5;a++){
        printf("%d. %d + %di\n",a+1,array[a].real,array[a].complex);
    }
}

int main()
{
    comp arr[5];
    for(int a=0;a<5;a++){
        printf("\n%d.Enter the real and complex part: \n",a+1); scanf("%d",&arr[a].real); scanf("%d",&arr[a].complex);
    }
    
    display(arr);
    return 0;
}