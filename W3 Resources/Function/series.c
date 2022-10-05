#include<stdio.h>
int fact(int a);

int main()
{
    int sum=0;
    printf("The sum of the series: 1!/1+2!/2+3!/3+4!/4+5!/5 is\n\n");
    sum = (fact(1)/1) + (fact(2)/2) + (fact(3)/3) + (fact(4)/4) + (fact(5)/5);
    printf("%d",sum);
    return 0;
}
int fact(int a){
    int n,fact=1;
    for(n=1;n<=a;n++){
        fact*=n;
    }
    return fact;
}