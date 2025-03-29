#include<stdio.h>
#include<limits.h>
int secondsmalestelement(int arr[],int n){
    int firstsmall=INT_MIN;
    int secondsmall=INT_MIN;
    int max=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<firstsmall){
            firstsmall=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int j=0;j<n;j++){
        if(arr[j]<secondsmall&&arr[j]>firstsmall&&arr[j]<max){
            arr[j]=secondsmall;
        }
    }
    return secondsmall;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",secondsmalestelement(arr,n));
}