#include<stdio.h>
int major(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>n/2){
            return arr[i];
        }

    }
    return -1;
}
int main(){
    int  n;
    scanf("%d",&d);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",major(arr,n));
}