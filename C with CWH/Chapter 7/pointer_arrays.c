#include<stdio.h>


int main()
{
    int marks[4];
    int *ptr = marks;
    printf("Enter the marks of the student: \n");

    for(int a=0;a<4;a++){
        printf("Student:%d ",a+1); scanf("%d",ptr);
        ptr++;
    }

    ptr = marks;
    for(int a=0;a<4;a++){
        printf("The marks obtained by student %d is %d\n",a+1,*ptr); ptr++;
    }
    return 0;
}
// if u want to use pointer to print the value inside the array

// #include<stdio.h>
// int main()
// {
//     int marks[4];
//     int *ptr = marks;
//     printf("Enter the marks of the student: \n");

//     for(int a=0;a<4;a++){
//         printf("Student:%d ",a+1); scanf("%d",ptr);
//         ptr++;
//     }

//     for(int a=0;a<4;a++){
//         printf("The marks obtained by student %d is %d\n",a+1,marks[a]);
//     }
//     return 0;
// }