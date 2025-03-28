int searchInRotatedArray(int arr[],int n,int target){
    int found =0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            
            found=1;
            return i;
        }
        else{
            return -1;
        }
    }
    
}