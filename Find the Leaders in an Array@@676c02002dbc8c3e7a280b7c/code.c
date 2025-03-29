#include<stdio.h>
int isleader(int arr[],int n){
     for(int i=0;i<n;i++){
        int found=0;

        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                printf("%d ",arr[i]);
            }
        }
        
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    isleader(arr,n);
   
}