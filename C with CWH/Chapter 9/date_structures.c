#include<stdio.h>
#include<string.h>

typedef struct date{
    int day,month,year;
}date;

void display(date x){
    printf("The date is %d/%d/%d\n",x.day,x.month,x.year);
}

int dateCmp(date d1, date d2){
    if(d1.year>d2.year){
        return 1;
    }
    else if(d1.year<d2.year){
        return -1;
    }

    if(d1.month>d2.month){
        return 1;
    }
    else if(d1.month<d2.month){
        return -1;
    }

    if(d1.day>d2.day){
        return 1;
    }
    else if(d1.day<d2.day){
        return -1;
    }
    
        return 0;
    
}

int main()
{
    date d1 = {23,01,22};
    date d2 = {23,01,22};
    
    display(d1); display(d2);

    int a = dateCmp(d1,d2);
    printf("Date comparison fuction returns: %d",a);
    return 0;
}