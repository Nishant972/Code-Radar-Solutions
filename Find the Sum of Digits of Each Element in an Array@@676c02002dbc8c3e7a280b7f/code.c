#include<stdio.h>
int sumofdigit(int arr,int n){
    int a, b,sum=0;
    for(int i=0;i<n;i++){
        while(arr[i]>0){
            sum+=arr[i]%10;
            arr[i]/=10;
        }
        return sum;
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