#include<stdio.h>
int isprime( int n){
    
    if(n<2){
        return 0;
    }
    for(int i=2;i*i<n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
    

}
int primenumbers(int arr[],int a){
    int count =0;
    for(int i=0;i<a;i++){
        if(isprime(arr[i])){
            count++;
        }
    }return count;
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[a]);
    }
    printf("%d",primenumbers(arr,a));
}