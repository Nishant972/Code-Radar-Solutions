#include<stdio.h>
int evenno(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
}
int oddno(int arr[],int n){
    int abc=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            abc++;
        }
    }
    return abc;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d",evenno(arr,n),oddno(arr,n));
}