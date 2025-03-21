#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=(n-i);j>=1;j--){
            printf(" ");
        }
        for(int p=1;p<=n;p++){
            printf("%d ",p);
        }
        printf("\n");
    }
    return 0;
}