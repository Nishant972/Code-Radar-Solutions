#include<stdio.h>
int secondlarget(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++)
            if(arr[j+1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    
    if(arr[1]){
        return arr[1];
    }
    else{
        return -1;
    }

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