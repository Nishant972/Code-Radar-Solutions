#include<stdio.h>
int rotatebyone(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n-1){
            arr[n-1]=arr[0];
        }
        else{
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
}
int rotatemore(int arr[],int n,int k){
    for(int i=1;i<=k;i++){
        rotatebyone(arr,n);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&n);
    }
    int k;
    scanf("%d",&k)
    rotatemore(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}