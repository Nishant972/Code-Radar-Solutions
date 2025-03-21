#include <stdio.h>

void issghjdsduifdsPrime(int a);

int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int num = 0;
        scanf("%d", &num);
        issghjdsduifdsPrime(num);
    }

    return 0;
}

void issghjdsduifdsPrime(int a)
{
    int flag = 0;

    if(a == 1 || a == 0)
    {
        flag = 1;
    }
    else
    {
        for(int b = 2; b <= a / 2; b++)
        {
            if (a % b == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}
