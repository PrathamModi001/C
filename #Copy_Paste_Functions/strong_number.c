int strong(int num);



int strong(int num){
    int x,y,z,sum=0;
    x = num/100;
    y = (num - (x*100))/10;
    z = (num - ((x*100) + (y*10)));

    sum = factorial(x) + factorial(y) + factorial(z);

    if(sum==num){
        printf("\n\nThe number %d is a Strong Number!",num);
    }
    else{
        printf("\n\nThe number %d is not a Strong Number!",num);
    }
}