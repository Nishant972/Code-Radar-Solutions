#include<stdio.h>
void shifttoright(int arr[],int n){
    int last=arr[n-1];
    for(int i=0;i<n;i++){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
}
void rotatearray(int arr[],int n,int k){
    for(int i=0;i<k;i++){
        shifttoright(arr,n);
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
    rotatearray(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}