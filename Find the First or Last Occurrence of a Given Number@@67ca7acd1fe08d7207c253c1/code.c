findOccurence(int arr[],int n,int target,char mode){
    int found=0;
    for(int i=0;i<=n;i++){
        if(arr[i]==target){
            if(mode=='F'){
                printf("%d",arr[i-1]);
            }
            else{
                printf("%d",arr[i+1]);
            }
            found=1;
        }
    }   
    if(!found){
        printf("-1");
    }


}