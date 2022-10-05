#include<stdio.h>

int main()
{
    int amount,hundred_notes,fifty_notes,twenty_notes,ten_notes,five_notes,two_notes,one_notes;
    
    printf("Enter the amount: $");
    scanf("%d",&amount);

    hundred_notes=amount/100;
    fifty_notes=(amount-(hundred_notes*100))/50;
    twenty_notes=(amount-((hundred_notes*100)+(fifty_notes*50)))/20;
    ten_notes=(amount-((hundred_notes*100)+(fifty_notes*50)+(twenty_notes*20)))/10;
    five_notes=(amount-((hundred_notes*100)+(fifty_notes*50)+(twenty_notes*20)+(ten_notes*10)))/5;
    two_notes=(amount-((hundred_notes*100)+(fifty_notes*50)+(twenty_notes*20)+(ten_notes*10)+(five_notes*5)))/2;
    one_notes=(amount-((hundred_notes*100)+(fifty_notes*50)+(twenty_notes*20)+(ten_notes*10)+(five_notes*5)+(two_notes*2)));

    printf("$100 Notes = %d\n",hundred_notes);
    printf("$50 Notes = %d\n",fifty_notes);
    printf("$20 Notes = %d\n",twenty_notes);
    printf("$10 Notes = %d\n",ten_notes);
    printf("$5 Notes = %d\n",five_notes);
    printf("$2 Notes = %d\n",two_notes);
    printf("$1 Notes = %d\n",one_notes);

    return 0;
}