#include<stdio.h>
int increasing(int arr[],int n){
    
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                return 0;
            }
        }
    
    return 1;
}
int decreasing(int arr[],int n){
    
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                return 0;
            }
        }
    
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(increasing(arr,n)|| decreasing(arr,n)){
        printf("YES");
    }
    else{
        printf("NO");   
    }
}