#include<stdio.h>
int main(){
    int a,lsb;
    scanf("%d",&a);
    lsb=a&1;
    if(lsb==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}