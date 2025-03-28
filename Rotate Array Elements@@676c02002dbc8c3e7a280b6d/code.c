#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int k;
    scanf("%d",k);
    for(int i=0;i<n;i++){
        for(int i=0;i<k;i++){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d/n",arr[i]);
    }
    return 0;
}