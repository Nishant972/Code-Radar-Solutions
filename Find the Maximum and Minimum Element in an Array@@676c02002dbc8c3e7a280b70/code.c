#include<stdio.h>
int maximum(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i+1]>max){
            max=arr[i+1];
        }
        
    }
    return max;
}
int minimum(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<min){
            min=arr[i+1];
        }
    }
    return min;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
       
    }
    printf("%d %d",minimum(arr,n),maximum(arr,n));
}