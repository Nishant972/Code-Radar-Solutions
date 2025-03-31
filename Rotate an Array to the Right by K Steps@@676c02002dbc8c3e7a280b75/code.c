#include<stdio.h>
void reverse(int arr[],int end,int start){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotate(int arr[],int n,int k){
    k=k%n;
    if(k==0){
        return;
    }
    reverse(arr,n-1,0);
    reverse(arr,k-1,0);
    reverse(arr,n-1,k);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
