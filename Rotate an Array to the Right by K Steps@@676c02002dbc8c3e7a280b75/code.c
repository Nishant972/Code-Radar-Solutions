#include<stdio.h>
void rotatebyone(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
} 
void rotatemore(int arr[],int n,int k){
    k=k%n;
    for(int i=1;i<=k;i++){
        rotatebyone(arr,n+1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    rotatemore(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}