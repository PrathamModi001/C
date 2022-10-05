#include<stdio.h>
#include<stdlib.h>


int main()
{
    float *ptr; ptr = (float*) calloc(5,sizeof(float));

    printf("Enter the elements: \n");
    // for(int a=0;a<5;a++){
    //     printf("Element %d: ",a+1); scanf("%f",&ptr[a]);
    // }

    
    // if you dont enter any values for calloc then
    // by default you will have 0 as its default value

    printf("\n\nThe elements of the float pointer are: \n");
    for(int a=0;a<5;a++){
        printf("Element %d - %f\n",a+1,ptr[a]);
    }
    
    return 0;
}