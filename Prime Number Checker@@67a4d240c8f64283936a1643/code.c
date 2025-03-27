int isPrime(int num){
    int flag=0;
    if(num==0 || num==1){
        flag=0;
    }
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("1");
    }
    else{
        printf("0");
    }

}