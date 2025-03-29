#include<stdio.h>
int consequance(int arr[],int  n){
    int count=0;
    int consecount=0
    int cd=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
        if(arr[i]<arr[i+1]){
            consecount++;
            cd++;
        }
    }return count+consecount/cd;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",consequance(arr,n));
}