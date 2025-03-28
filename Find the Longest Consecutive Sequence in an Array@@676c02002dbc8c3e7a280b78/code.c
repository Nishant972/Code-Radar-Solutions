#include<stdio.h>
int abc(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        while(arr[i]<arr[i+1]){
            count=1;
        }
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&n);
    }
    printf("%d",abc(arr,n));
}