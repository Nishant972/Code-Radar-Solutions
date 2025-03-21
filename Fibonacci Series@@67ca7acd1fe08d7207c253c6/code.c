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
}
void febonacci(n){
    int a=0,b=1,c;
    for(int i=1;i<=n;i++){
        a=b;
        b=c;
        c=a+b;
        printf("%d ",c);
    }
}