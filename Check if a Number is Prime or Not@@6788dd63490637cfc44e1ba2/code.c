#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
    }
    else if(a==2){
        printf("Prime");
    }
    else if(a%2==0){
        printf("Not Prime");
    }
    else if(a==3){
        printf("Prime");

    }
    else if(a%3==0){
        printf("Not Prime");
    }
    else{
        if(a%5!=0 && a%6!=0 && a%11!=0){
            printf("Prime");
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}