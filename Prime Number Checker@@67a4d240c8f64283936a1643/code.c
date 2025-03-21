#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num=0;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
}