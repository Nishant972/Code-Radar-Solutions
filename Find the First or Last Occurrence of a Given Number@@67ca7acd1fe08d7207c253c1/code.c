int findOccurrence(int arr[],int n,int target,char mode){
    int left=0,right=n-1,result=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            if(mode='F'){
                right=mid-1;
            }
            else if(mode='L'){
                left=mid+1;
            }

        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(result==-1 || result==0){
        return -1;
    }
    else{
        return arr[return-1];
    }
}