#include<stdio.h>
int numberofpalindrom(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++ ){
        int c=arr[i];
        int l=0;
        int rev=0;
        while(c!=0){
            l=c%10;
            rev=rev*10+l;
            c=c/10;

        }
        if(rev==arr[i]){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",numberofpalindrom(arr,n));
}