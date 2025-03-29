#include<stdio.h>
int maxproduct(int arr[],int n){
    int firstmax=arr[0];
    int secondmax=arr[0];
    
    for(int i=1;i<n;i++){
        
            arr[i]=-arr[i];
        }
        if(arr[i]>firstmax){
            firstmax=arr[i];
        }
    }
    for(int j=1;j<n;j++){
        if(arr[j]>secondmax && arr[j]<firstmax){
            secondmax=arr[j];
        }
    }
    return firstmax*secondmax;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",maxproduct(arr,n));
}