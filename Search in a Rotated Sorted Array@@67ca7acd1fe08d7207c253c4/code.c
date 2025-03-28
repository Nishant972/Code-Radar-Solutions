int searchInRotatedArray(int arr[],int n,int target){
    int found =0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
            found=1;
        }
    }
    if(found=0){
        printf("-1");
    }
}