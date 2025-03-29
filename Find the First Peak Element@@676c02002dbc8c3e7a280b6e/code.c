#include<stdio.h>
int pealelement(int arr[],int n,int target){
    int b;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            b=i;
        }
    }
    for(int j=1;j<n;j++){
        if(n-b-j>0){
            if(target<arr[b+j]){
            return arr[b+j];}

        }
        else if(b-j>=0){
            if(target<arr[b-j]){
                return arr[b-j];
            }
        }
        else{
            return -1;
        }              
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    printf("%d",pealelement);
}