#include<stdio.h>

int main()
{
    int total,year, week, days;
    printf("Enter the number of days: \n");
    scanf("%d",&total);

    year = total/365;
    week = total % 365/7;
    days = total - ((365*year)+(week*7));

    printf("Year :  %d\n",year);
    printf("Week :  %d\n",week);
    printf("Days :  %d\n",days);
    return 0;
}