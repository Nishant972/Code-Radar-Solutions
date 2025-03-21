#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num=0;
        scanf("%d", &num);
        issghjdsduifdsPrime(num);
    }
};

void issghjdsduifdsPrime(int a)
{
    int flag=0;

    if(a==1 || a==0)
    {
        flag=0;
    }
    else
    {
        for(int b=2; b<a/2; b++)
        {
            if (a%b==0)
            {
                flag=1;
            }
        }
    }

    printf("%d",flag);

};

