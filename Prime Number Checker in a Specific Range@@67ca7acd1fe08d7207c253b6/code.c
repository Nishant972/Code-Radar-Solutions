void printPrimesInRange(int a,int b){
    
    for(int i=a;i<b;i++){
        if(a<2){
            continue;
        }
        int isprime=1;
        for(int j=2;j<i;j++){
            if(i%j==2){
                isprime=0;
                break;
            }
        }
        if(isprime){
        printf("%d ",i);
        }
    }

    

}