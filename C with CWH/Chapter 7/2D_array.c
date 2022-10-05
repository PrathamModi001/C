#include<stdio.h>


int main()
{
    int marks[3][5];
    int stud=3; int subj=5;
    for(int a=0;a<stud;a++){
        for(int b=0;b<subj;b++){
            printf("Enter the marks of student %d in subject %d\n",a+1,b+1); scanf("%d",&marks[a][b]);
        }
    }

    for(int a=0;a<stud;a++){
        for(int b=0;b<subj;b++){
            printf("The marks of student %d in subject %d are: %d\n",a+1,b+1,marks[a][b]);
        }
    }
    return 0;
}