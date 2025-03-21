#include<stdio.h>
void febonacci(int n);
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    else{
        febonacci(n);
    }
    return 0;
}
void febonacci(n){
    int a=0,b=1,c;
    if(n==1){
        printf("%d",a);
    }
    printf("%d",a);
    printf("%d",b);
    for(int i=3;i<=n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}