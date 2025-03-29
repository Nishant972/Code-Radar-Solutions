#include<stdio.h>
void isprime( int n){
    int flag=1;
    if(n<2){
        flag=1;
    }
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            flag=0;
        }
    }
    if(flag==1){
        return n;
    }
    else{
        continue;
    }

}
void primenumbers(int arr[],int a){
    for(int i=0;i<n;i++){
        isprime(arr[i]);
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[a]);
    }
    prinf("%d",primenumbers);
}