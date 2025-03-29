#include<stdio.h>
int largesteven(int arr[],int n){
    int count=0,found=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
            found=1;
        }
    }
    if(found==1){
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even[i]=arr[i];
            }
        }
    }
    else{
        return -1;
    }
    int max=even[0];
    for(int i=1;i<n;i++){
        if(even[1]>max){
            max=even[i];
        }
    }
    return max;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",largesteven(arr,n));
}