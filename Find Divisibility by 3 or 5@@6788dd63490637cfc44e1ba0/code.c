#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%5==0){
        printf("Divisible By Both");
    }
    else if(a%3==0){
        printf("Divisble by 3");
    }
    else if(a%5==0){
        printf("Divisble by 5");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}