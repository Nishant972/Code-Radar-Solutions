#include<stdio.h>
int consequance(int arr[],int  n){
    int count=0;

    for(int i=0;i<n;i++){
        
         if(arr[i]<arr[i+1]){
            count++;
            break;
            }
        else{
            count++;
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