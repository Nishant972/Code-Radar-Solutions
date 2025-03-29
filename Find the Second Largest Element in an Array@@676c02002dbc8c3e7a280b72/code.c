#include<stdio.h>
int secondlarget(int arr[],int n){
    int firstmax=0,secondmax=0;
    for(int i=0;i<n;i++){
        if(arr[i]>firstmax){
            firstmax=arr[i];
        }
    }
    for(int j=0;j<n;j++){
        if(arr[j]>0 &&arr[j]<firstmax){
            secondmax=arr[j];
        }
    }
    return secondmax;

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