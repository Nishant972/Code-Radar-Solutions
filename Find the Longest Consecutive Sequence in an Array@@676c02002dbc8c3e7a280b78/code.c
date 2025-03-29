#include<stdio.h>
int consequance(int arr[],int  n){
    int count=0;
    int consecount=0;
    int cd=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            count++;
        }
        else{
            count=1;
            return count;
        }
    }return count;
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