int findOccurrence(int arr[],int n,int target,char mode){
    if(mode=='F'){
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                if(i=0){
                    printf("-1");
                }
                else{
                    return arr[i-1];
                }
            }

        }
    }
}   if(mode=='L'){
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                if(i=0){
                    printf("-1");
                }
                else{
                    return arr[i-1];
                }
            }
        }

}
