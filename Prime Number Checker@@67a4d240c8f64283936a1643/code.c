int isPrime(int num){
    int flag=0;
    if(num<=1){
        return 0;
    }
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return 1;
        }
    }
    

}