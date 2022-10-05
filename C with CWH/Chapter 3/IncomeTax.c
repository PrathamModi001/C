#include<stdio.h>

int main()
{
    int income, tax;

    printf("Please enter your income: ");
    scanf("%d", &income);
    
    // 0% Income Tax
    if (income <= 250000)
    {tax = 0 * (income - 250000);}

    // 5% Income Tax
    if ((income >= 250000) && (income <= 500000));
    {tax = 0.5 * (income - 250000);}
    

    // 20% Income Tax
    if ((income >= 500000) && (income <= 1000000))
    {tax = 0.2 * (income - 500000);}
    

    // 30% Income Tax
    if (income >= 1000000)
    {tax = 0.3 * (income - 1000000);}

    printf(" The net amount of tax to be paid is %d which is due 26th of this month.", tax);


    return 0;
}