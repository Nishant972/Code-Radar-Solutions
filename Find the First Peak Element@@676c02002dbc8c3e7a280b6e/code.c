#include<stdio.h>
int pealelement(int arr[],int n,int target){
    int b=-1;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            b=i;
            break;
        }
    }
    if(b==-1){
        return -1;
    }

    int right=-1,left=-1;
    for(int j=1;j<n;j++){
        if(b+j<n && arr[b+j]>target){
            return arr[b+j];
            right=arr[b+j];
            break;
        }
    }
    for(int j=b-1;j>0;j++){
        if(b-j>0&&arr[b-j]>target){
            return arr[b-j];
            left=arr[b-j];
        }
    }
    if(right==-1){
        return left;
    }
    if (left==-1){
        return right;
    }
    return(right-target<left-target) ? right:left;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    printf("%d",pealelement(arr,n,target));
}