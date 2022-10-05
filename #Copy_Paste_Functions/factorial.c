int factorial(int m);



int factorial(int m){
    int fact=1;
    for(int a=1;a<=m;a++){
        fact *=a;
    }
    return fact;
}