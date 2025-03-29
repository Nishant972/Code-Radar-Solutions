#include<stdio.h>
#include<limits.h>
int secondlarget(int arr[],int n){
    int firstmax=INT_MIN,secondmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>firstmax){
            firstmax=arr[i];
        }
    }int found=0;
    for(int j=0;j<n;j++){
        if(arr[j]>secondmax &&arr[j]<firstmax){
            secondmax=arr[j];
            found=1;
        }
    }
    
    return (secondmax==INT_MIN)? -1:secondmax;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",secondlarget(arr,n));
}