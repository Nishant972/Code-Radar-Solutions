#include<stdio.h>
int largest(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>max){
            max=arr[i+1];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            return i;
        }
        arr[i]==0;
    }
    ;
    int abc=0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>abc){
            abc=arr[i+1];
        }
    }
    return abc;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",largest(arr,n));
}
