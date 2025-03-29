#include<stdio.h>
int sumofdigit(int arr[n],int n){
    int a, b,sum=0,arrn[];
    for(int i=0;i<n;i++){
        while(arr[i]>0){
            sum+=arr[i]%10;
            arr[i]/=10;
        }
        arrn[sum];
    }
    for(int i=0;i<n;i++){
        return arrn[i];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",sumofdigit(arr,n));
}