void printPrimesInRange(int a,int b){
    int isprime=1;
    for(int i=a;i<b;i++){
        if(a<1){
            isprime=0;
        }
        else{
            if(b%a==0){
                isprime=0;
            }
        }
    }
    if(isprime){
        printf("%d ",a);
    }

}