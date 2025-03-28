#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i+1]>arr[i]){
                printf("Sorted");
            }
            else{
                printf("Not Sorted");
            }
        }
    }

}