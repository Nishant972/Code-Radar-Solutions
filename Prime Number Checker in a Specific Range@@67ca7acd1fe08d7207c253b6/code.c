void printPrimesInRange(int a,int b){
    int found=0;
    for(int i=a;i<=b;i++){
        if(i<2){
            continue;
        }
        int isprime=1;
        for(int j=2;j<i/2+1;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
        printf("%d ",i);
        found=1;
        }
        
    }
    if(!found){
        printf("No prime numbers");
    }

    

}