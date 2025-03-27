int findUnsortedSubarray(int arr[],int n){
    int count=0;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                count++;
            }
        }
    }
    return count;
}