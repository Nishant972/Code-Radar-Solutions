#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=64;j<=(64+i);j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}