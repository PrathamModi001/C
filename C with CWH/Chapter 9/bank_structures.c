#include<stdio.h>
#include<string.h>

typedef struct b{
    int acc; char *ptr; float bal; int ori;
}bank;

void display(bank arr[]){
for(int a=0;a<3;a++){   
    printf("\n\nAccount number of the candidate %d is: %d",a+1,arr[a].acc);
    printf("The name of the candidate is: %s",arr[a].ptr);
    printf("\nTotal Amount present: %.2f",arr[a].bal);
    printf("\nThe Year the account was opened: %d",arr[a].ori);
    }
}

int main()
{
    bank arr[3];
    
    printf("\nEnter the details of your bank account: \n\n");
    
    for(int a=0;a<3;a++){
        printf("\n\nCandidate %d:\n",a+1);
        printf("Account Number: "); scanf("%d",&arr[a].acc);
        printf("Enter the name: "); scanf("%s",&arr[a].ptr);//??
        printf("Balance Available: "); scanf("%f",&arr[a].bal);
        printf("Year of opening of the account: "); scanf("%d",&arr[a].ori);
    }

    display(arr);

    return 0;
}