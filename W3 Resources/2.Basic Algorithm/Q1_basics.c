#include<stdio.h>

int main(void)
{
    int n1,n2,n3,n4;
    printf("Enter the first pair of integers:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Enter the second pair of integers:\n");
    scanf("%d",&n3);
    scanf("%d",&n4);
    printf("\n\n%d ",test(n1,n2));
    printf("%d ",test(n3,n4));

}
int test(int x, int y){

    return x==y ? (x+y)*3 : x+y; 
}