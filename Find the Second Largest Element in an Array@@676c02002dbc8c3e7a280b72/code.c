#include<stdio.h>
int secondlarget(int arr[],int n){
    int firstmax=0,secondmax=0;
    for(int i=0;i<n;i++){
        if(arr[i]>firstmax){
            firstmax=arr[i];
        }
    }int found=0;
    for(int j=0;j<n;j++){
        if(arr[j]>0 &&arr[j]<firstmax){
            secondmax=arr[j];
            found=1;
        }
    }
    if(found==0){
        return-1;
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