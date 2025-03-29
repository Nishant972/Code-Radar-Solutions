#include<stdio.h>
#include<limits.h>
int secondsmalestelement(int arr[],int n){
    int firstsmall=INT_MIN;
    int secondsmall=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<firstsmall){
            firstsmall=arr[i];
        }
       
    }
    for(int j=0;j<n;j++){
        if(arr[j]<secondsmall&&arr[j]>firstsmall){
            secondsmall=arr[j];
        }
    }
    return (secondsmall==INT_MIN)-1:secondsmall;
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