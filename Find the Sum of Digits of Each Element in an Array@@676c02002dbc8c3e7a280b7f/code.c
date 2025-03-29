#include<stdio.h>
int sumofdigit(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int sum=0;
        while(arr[i]>0){
            sum+=arr[i]%10;
            arr[i]/=10;
        }
        arr[i]=sum;
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sumofdigit(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}