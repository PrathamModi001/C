#include<stdio.h>

int main()
{
    int a,input;
    float calc;

    printf("Press 1 to calculate area of circle\n");
    printf("Press 2 to calculate area of square\n");
    printf("Press 3 to calculate area of sphere\n");
    printf("Enter your choice:\n");
    scanf("%d",&a);

    switch(a){
        case 1: {
            printf("Enter the radius: ");
            scanf("%d",&input);
            calc = (3.14)*input*input;
            printf("\nThe area of the circle is: %f",calc);
            break;
        }

        case 2: {
            printf("\nEnter the side of the square: ");
            scanf("%d",&input);
            calc = input*input;
            printf("\nThe area of the square is: %f",calc);
            break;
        }

        case 3: {
            printf("\nEnter the side of the sphere: ");
            scanf("%d",&input);
            calc = 4*((3.14)*input*input);
            printf("\nThe area of the sphere is: %f",calc);
            break;
        }

        default: {
            printf("Invalid Response");
            break;
        }
    }
    return 0;
}