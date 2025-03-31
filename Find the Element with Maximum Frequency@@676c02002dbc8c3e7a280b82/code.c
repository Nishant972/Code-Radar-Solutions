#include<stdio.h>
in maxfrequency(int arr[],int n){
    int max_frequency=arr[0];
    int count=0;
    for(int i=0;i<n;i++){
        int acount=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                acount++;
            }
        }
        if(acount>count){
            count=acount;
            max_frequency=arr[i];
        }
    }
    return max_frequency;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    printf("%d",maxfrequency(arr,n));
}