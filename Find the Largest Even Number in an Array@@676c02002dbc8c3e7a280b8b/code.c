#include<stdio.h>
#include<limits.h>
int largesteven(int arr[],int n){
    int max_even=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(arr[i]>max_even){
                max_even=arr[i];
            }
        }
    }

    return max_even;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",largesteven(arr,n));
}