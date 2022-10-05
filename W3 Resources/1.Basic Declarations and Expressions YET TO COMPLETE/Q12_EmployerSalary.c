#include<stdio.h>

int main()
{
    char id[10];//To limit the maximum number of characters to input//
    int hours,salary,perhour;

    printf("Enter your Employer ID: ");
    //scanf("%c",&id); THIS ISNT WORKING
    scanf("%s",&id);
    printf("Enter the number of working hours:\n ");
    scanf("%d",&hours);
    printf("Salary per hour: ");
    scanf("%d",&perhour);
    salary = hours*perhour;
    printf("Your salary is %d",salary);

    return 0;
}