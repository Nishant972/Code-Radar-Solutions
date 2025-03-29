#include<stdio.h>
int repeating(int arr[],int n){
    int minindex=n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                if(j-i<minindex){
                    minindex=i;
                }
            }
        }
            
    }
    return (minindex==n) ?-1:arr[minindex];
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",repeating(arr,n));
}