#include<stdio.h>
int main(){
    int n,count=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=count;j++){
            printf("%d",&j);
            count+=count;
        }
    }
    return 0;
}