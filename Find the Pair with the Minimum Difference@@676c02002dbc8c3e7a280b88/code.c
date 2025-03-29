#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int smallestdifference(int arr[],int n){
    int min_diff=INT_MAX;
    int num1,num2;
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])<min_diff){
                min_diff=abs(arr[i]-arr[j]);
                num1=arr[i];
                num2=arr[j];
            }
        }
    }if(num1>num2){
        printf("%d %d\n",num2,num1);
    }else{
        printf("%d %d\n",num1,num2);
        
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    smallestdifference(arr,n);

}