#include<stdio.h>

int main()
{
    int principal;
    float time, rate, Final_Amount;

    printf("Your principal amount is:\n ");
    scanf("%d",&principal);
    printf("The rate of interest is: \n");
    scanf("%f",&rate);
    printf("The period of time of investment(in years): \n");
    scanf("%f",&time);
    Final_Amount = principal*(1+rate * time);
    printf("By using the formula of simple interest: A = P(1 + RT),\n We have, the total amount A: %f",Final_Amount);
    return 0;
}