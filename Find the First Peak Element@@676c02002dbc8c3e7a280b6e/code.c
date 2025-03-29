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

    for(int j=1;j<n;j++){
        if(b+j<n){
            if(target<arr[b+j]){
            return arr[b+j];}

        }
        if(b-j>=0){
            if(target<arr[b-j]){
                return arr[b-j];
            }
        }
                     
    }
    return -1;
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