#include<stdio.h>
int secondlarget(int arr[],int n){
    int firstmax=Int_min,secondmax=Int_min;
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
    
    return (secondmax==Int_min)? -1:secondmax;

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