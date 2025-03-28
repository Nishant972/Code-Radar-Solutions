#include<stdio.h>
void palindromecheck(int arr[],int n){
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[n-1-i]){
            found++;
        }
    }
    if(found==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    palindromecheck(arr,n);
}