#include<stdio.h>
int repeating(int arr[],int n){
    for(int i=0;i<n;i++){
        int diff[n];
        int index[n];
        
        int min=diff[0];
        int minindex;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
            diff[]=j-i;
            index[]=i;
            }
        }
        for(int k=0;k<n;k++){
            if(diff[k]<min){
                min=diff[k];
                minindex=index[k];
            }
        }
        return arr[minindex];    
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",repeating(arr,n));
}