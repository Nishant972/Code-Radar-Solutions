#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            count++;
        }
        if (count>n/2){
            return i;
        }

    }

}