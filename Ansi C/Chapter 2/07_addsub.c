#include<stdio.h>
#include<math.h>

int add(int a,int b);
int sub(int a,int b);
int main()
{
    int a,b,plus,minus;
    printf("Enter your first integer: ");
    scanf("%d",a);
    printf("Enter your second integer: ");
    scanf("%d",b);

    printf("%d + %d = %d", a,b,add(a,b));
    printf("%d - %d = %d", a,b,sub(a,b));
    return 0;
}