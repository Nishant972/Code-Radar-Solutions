#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' ||  a=='O' || a=='U'){
        printf("Vowel");

    }
    else if(a=='1' || a=='2' || a=='3' || a=='4' || a=='5' || a=='6' || a=='7' || a=='8' || a=='9' || a=='0'){
        printf("Digit");
    }
    else if((a>='a' && a<='z' )|| (a>='A' && a<='Z')){
        printf("Consonant");
    }
    else{
        printf("Special character");
    }
    return 0;
}